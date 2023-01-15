## Requierments
We are allowed to use the following functions:

We are allowed to use the following signals:<br />
	- SIGUSR1
	- SIGUSR2

- The communication between the client and the server has to be done only using
UNIX signals.

### Server:
	- Has to print its PID after start
	- Prints a string once it has been recieved

### Client:
	- Takes two parameters: server PID, string to send

### Libraries and functions used:

<signal.h>
// Library for:
// ◦ signal
//		typedef void (*sighandler_t)(int);
//		sighandler_t signal(int signum, sighandler_t handler);
//		https://man7.org/linux/man-pages/man2/signal.2.html
//
// ◦ sigaction
//		int sigaction(int signum, const struct sigaction *restrict act,
//		struct sigaction *restrict oldact);
//		https://man7.org/linux/man-pages/man2/sigaction.2.html
//
// ◦ sigemptyset
//		int sigemptyset(sigset_t *set);
//		https://man7.org/linux/man-pages/man3/sigemptyset.3p.html
//
// ◦ sigaddset
//		int sigaddset(sigset_t *set, int signo);
//		https://man7.org/linux/man-pages/man3/sigaddset.3p.html

<unistd.h>
// Library for:
// ◦ getpid
//		pid_t gettid(void);
//		https://man7.org/linux/man-pages/man2/gettid.2.html
//
// ◦ pause
//		https://man7.org/linux/man-pages/man2/pause.2.html
//
// ◦ kill
//		kill  [-signal|-s signal|-p]  [-q value] [-a] [--timeout milliseconds signal] [--] pid|name...
//		https://man7.org/linux/man-pages/man1/kill.1.html
//
// ◦ sleep
//		unsigned int sleep(unsigned int seconds);
//		https://man7.org/linux/man-pages/man3/sleep.3.html
//
// ◦ usleep
//		int usleep(useconds_t usec);
//		https://man7.org/linux/man-pages/man3/usleep.3.html

<stdlib.h>
// Library for:
// ◦ exit
//		noreturn void exit(int status);
//		https://man7.org/linux/man-pages/man3/exit.3.html

<stdlib.h>
// Library for:
// ◦ malloc
//		void *malloc(size_t size)
//
// ◦ free
//		void free(void *ptr)