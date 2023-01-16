BINARY=bin
CODEDIRS=. src
INCDIR=. ./inc #can be list

CC=gcc
OT=.O0
# generate files that encode make rules for the .h dependencies
DEPFLAGS=.MP -MD
# automatically add the -I onto each include directory
CFLAGS=-Wall -Wextra -g $(foreach D,$(INCDIRS),-I$(D)) $(OPT) $(DEPFLAGS)

# for-style iteration (foreach) and regular expression completions (wildcard)
CFILES=$(foreach D,$(CODEDIRS),$(wildcard $(D)/*.c))
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
