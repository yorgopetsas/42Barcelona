<h1 align="center">
	Universal Makefile
</h1>

## Overview

This version of Makefile tries to act as universal file which can be used for
the majority of the projects with only updating the first 2-3 variables.
The Makefil handles dependencies through the "<b>.MP -MD</b>" flags, controls the optimization through the 
<b>OT</b> variable which one can update, checks for relink, has call that allows to distribute and additionally can
show you the difference between your local repository and your GIT. <br />All of the funtions:<br />
* all
* clean
* fclean (coming soon)
* distribute
* diff
<br /><br />
This system is inspired by Gabriel Palmer and you can find test file on his GitHub:
<br />LINK: https://github.com/gwu-cs-os/evening_os_hour/blob/master/f19/10.2-makefiles/03_featureful_makefile/Makefile
<br />LINK: https://www.youtube.com/watch?v=DtGrdB8wQ_8

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
		@echo "Binary compiled!"

# only want .c file dependency here, thus $< instead of $^.
%.o:%.c
		$(CC) $(FLAGS) -c -o $@ $<

# The BINARY variable was excluded in order to include it in the "fclean" call.
clean:
		rm -rf $(OBJECTS) $(DEPFILES)

# The call is added by me and needs further tests
fclean: clean
		rm -rf $(BINARY)

# The call is added by me and needs further tests
re:			fclean $(BINARY)

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
.PHONY: all clean fclean re distribute diff

```
