<h1 align="center">
	Universal Makefile
</h1>

## Overview

This version of Makefile tries to act as universal file which can be used for
the majority of the projects with only updating the first 2-3 variables.
The Makefil handles dependencies through the ".MP -MD" flags, checks for relink, has
call that allows to distribute and additionally can show you the difference between
your local repository and your GIT. <br />
This system is inspired by Gabriel Palmer and you can find test file on his GitHub:
https://github.com/gwu-cs-os/evening_os_hour/blob/master/f19/10.2-makefiles/03_featureful_makefile/Makefile

### How to use

**1. The use of the file is very simple. One only needs to update the top 3 Variables 
for the majority of the projects. Of course there might be some particular cases in 
which you might want to change more things but those are definatelly exceptions. 

```
BINARY=bin
CODEDIRS=. src
INCDIR=. ./inc #can be list
```