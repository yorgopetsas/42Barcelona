BINARY=bin
CODEDIRS=. lib
INCDIR=. ./include #can be list

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

# This version of Makefile tries to act as universal file which can be used for 
# the majority of the projects with only updating the first 2-3 variables.
# This system is takem from Gabriel Palmer and you can find test file on his GitHub:
# https://github.com/gwu-cs-os/evening_os_hour/blob/master/f19/10.2-makefiles/03_featureful_makefile/Makefile