/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 22:33:04 by yzisis-p          #+#    #+#             */
/*   Updated: 2023/01/11 22:33:06 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/minitalk.h"

void	ft_handler(int signal)
{
	static int	bit;
	static int	i;
	
	if (signal == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 0)
	{
		printf("%c", i);
		bit = 0;
		i = 0;
	}
}
int	main(int argc, char **argv)
{
	int	pid;
	
	(void)argv;
	if (argc != 1)
	{
		printf("Error: wrong format.\n");
		printf("Try: ./server\n");
		return (0);
	}
	pid = getpid();
	printf("Error: wrong format.\n");
	printf("Waiting for a message...\n");
	while (argc == 1)
	{
		signal(SIGUSR1, ft_handler);
		signal(SIGUSR2, ft_handler);
		pause ();
	}
	return (0);
}
