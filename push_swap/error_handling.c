/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:06:29 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/03/06 20:09:36 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

size_t	ft_error_free(t_stack **stack_a, t_stack **stack_b)
{
	free(stack_a);
	free(stack_b);
	return (-1);
}

size_t	ft_error(void)
{
	printf("3\n");
	write(2, "Error\n", 6);
	return (-1);
}

int	check_input(int argc, char **argv)
{
	int	cnt;
	int	att;
	int	x;

	x = 1;
	cnt = 0;
	att = 0;
	if (argc == 1)
		exit (0);
	if (argc < 3 || argc > 502)
		return (0);
	while (argv[x] != NULL)
	{
		att = ft_atoi(argv[x]);
		if (att > 999 || att < 0)
			exit (0);
		x++;
	}
	return (1);
}

// TO DO
// Error Handling: 
// If no parameters are specified, the program must not display anything and give 
// the prompt back.
// In case of error, it must display "Error" followed by a ’\n’ on the standard error.
// Errors include for example: some arguments aren’t integers, some arguments are 
// bigger than an integer and/or there are duplicates.