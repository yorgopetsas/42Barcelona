## Requierments
### General Requierments:
- We are allowed to use the following functions:
	- write
	- Any equivalent of printf that I coded
	- signal
	- sigemptyset
	- sigaddset
	- sigaction
	- kill
	- getpid
	- malloc
	- free
	- pause
	- sleep
	- usleep
	- exit

- We are allowed to use the following signals:<br />
	- SIGUSR1
	- SIGUSR2

- The communication between the client and the server has to be done only using
UNIX signals.

### Server:
	- Has to print its PID after start
	- Prints a string once it has been recieved

### Client:
	- Takes two parameters: server PID and string to send

### Libraries and functions used:

#### <signal.h>
Library for:<br />
	- signal<br />
		- typedef void (*sighandler_t)(int);<br />
		- sighandler_t signal(int signum, sighandler_t handler);<br />
		- https://man7.org/linux/man-pages/man2/signal.2.html<br />
<br />
	- sigaction<br />
		- int sigaction(int signum, const struct sigaction *restrict act,<br />
		- struct sigaction *restrict oldact);<br />
		- https://man7.org/linux/man-pages/man2/sigaction.2.html<br />
<br />
	- sigemptyset<br />
		- int sigemptyset(sigset_t *set);<br />
		- https://man7.org/linux/man-pages/man3/sigemptyset.3p.html
<br />
	- sigaddset<br />
		- int sigaddset(sigset_t *set, int signo);<br />
		- https://man7.org/linux/man-pages/man3/sigaddset.3p.html<br />
<br />
<unistd.h><br />
Library for:<br />
	- getpid<br />
		- pid_t gettid(void);<br />
		- https://man7.org/linux/man-pages/man2/gettid.2.html<br />
<br />
	- pause<br />
		- https://man7.org/linux/man-pages/man2/pause.2.html<br />
<br />
	- kill<br />
		- kill  [-signal|-s signal|-p]  [-q value] [-a] [--timeout milliseconds signal] [--] pid|name...<br />
		- https://man7.org/linux/man-pages/man1/kill.1.html<br />
<br />
	- sleep<br />
		- unsigned int sleep(unsigned int seconds);<br />
		- https://man7.org/linux/man-pages/man3/sleep.3.html<br />
<br />
	- usleep<br />
		- int usleep(useconds_t usec);<br />
		- https://man7.org/linux/man-pages/man3/usleep.3.html<br />
<br />
<stdlib.h><br />
Library for:<br />
	- exit<br />
		- noreturn void exit(int status);<br />
		- https://man7.org/linux/man-pages/man3/exit.3.html<br />
<br />
<stdlib.h><br />
Library for:<br />
	- malloc<br />
		- void *malloc(size_t size)<br />
<br />
	- free<br />
		- void free(void *ptr)<br />