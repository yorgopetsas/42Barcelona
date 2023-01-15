/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk-h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 22:33:04 by yzisis-p          #+#    #+#             */
/*   Updated: 2023/01/15 22:33:06 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
// Library for:
// ◦ signal
//		typedef void (*sighandler_t)(int);
//      sighandler_t signal(int signum, sighandler_t handler);
// 		https://man7.org/linux/man-pages/man2/signal.2.html
//
// ◦ sigaction
// 		int sigaction(int signum, const struct sigaction *restrict act,
//                     struct sigaction *restrict oldact);
// 		https://man7.org/linux/man-pages/man2/sigaction.2.html
//
// ◦ sigemptyset
//		int sigemptyset(sigset_t *set);
//		https://man7.org/linux/man-pages/man3/sigemptyset.3p.html
//
// ◦ sigaddset
//		int sigaddset(sigset_t *set, int signo);
//		https://man7.org/linux/man-pages/man3/sigaddset.3p.html

#include <unistd.h>
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
// 		https://man7.org/linux/man-pages/man1/kill.1.html
//
// ◦ sleep
//		unsigned int sleep(unsigned int seconds);
//		https://man7.org/linux/man-pages/man3/sleep.3.html
//
// ◦ usleep
//		int usleep(useconds_t usec);
//		https://man7.org/linux/man-pages/man3/usleep.3.html

#include <stdlib.h>
// Library for:
// ◦ exit
//		noreturn void exit(int status);
//		https://man7.org/linux/man-pages/man3/exit.3.html

#include <stdlib.h>
// Library for:
// ◦ malloc
//		void *malloc(size_t size)
//
// ◦ free
//		void free(void *ptr)
