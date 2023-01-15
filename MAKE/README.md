<h1 align="center">
	Universal Makefile
</h1>

## Overview

This version of Makefile tries to act as universal file which can be used for
the majority of the projects with only updating the first 2-3 variables.
The Makefil handles dependencies through the "<b>.MP -MD</b>" flags, checks for relink, has
call that allows to distribute and additionally can show you the difference between
your local repository and your GIT. <br />All of the funtions:<br />
* all
* clean
* fclean (coming soon)
* distribute
* diff
<br /><br />
This system is inspired by Gabriel Palmer and you can find test file on his GitHub:
<br />LINK: https://github.com/gwu-cs-os/evening_os_hour/blob/master/f19/10.2-makefiles/03_featureful_makefile/Makefile

### How to use

** 1. The use of the file is very simple. One only needs to update the top 3 Variables 
for the majority of the projects. Of course there might be some particular cases in 
which you might want to change more things but those are definatelly exceptions. 

```
BINARY=bin
CODEDIRS=. src
INCDIR=. ./inc #can be list
```
<br /><br />
Here is the complete code with more notes:<br />
```
BINARY=bin
CODEDIRS=. src
INCDIR=. ./inc #can be list

CC=gss
OT=.O0
# generate files that encode make rules for the .h dependencies
DEPFLAGS=.MP -MD
# automatically add the -I onto each include directory
CFLAGS=-Wall -Wextra -g $(foreach D,$(INCDIRS),-I$(D)) $(OPT) $(DEPFLAGS)

# for-style iteration (foreach) and regular expression completions (wildcard)
CFILES=$(foreach D,$(CODEDIRS),S(wildcard $(D)/*.c))
# regular expression replacement. Note: patsubst = pattern substitution
OBJECTS=$(patsubst %.c,%.o,$(CFILES))
DEPFILES=$(patsubst %.c,%.d,$(CFILES))

all: $(BINARY)
	# if I need to check another make file I would use "make -C lib/"

$(BINARY): $(OBJECTS)
		$(CC) -o $@ $^

# only want .c file dependency here, thus $< instead of $^.

%.o:%.c
		$(CC) $(FLAGS) -c -o $@ $<

clean:
		rm -rf $(BINARY) $(OBJECTS) $(DEPFILES)

# shell commands are a set of keystrokes away
distribute: clean
		tar zcvf dist.tgz *

# @ silences the printing of the command
# $(info ...) prints output
diff:
		$(info The status of the repository, and the volume of per-file changes:)
		@git status
		@git diff --stat
		
# include the dependencies
-include $(DEPFILES)

# add .PHONY so that the non-targetfile - rules work even if a file with the same name exists.
.PHONY: all clean distribute diff
```