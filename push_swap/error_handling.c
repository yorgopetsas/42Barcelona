/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:06:29 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/21 11:11:15 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

// FUNTION TO SHOW THE ERROR MSG AND RETURN -1
size_t	ft_error_free(t_stack **stack_a, t_stack **stack_b)
{
	free(stack_a);
	free(stack_b);
	return (0);
}

// FUNTION TO SHOW THE ERROR MSG AND RETURN -1
size_t	ft_error(void)
{
	printf("3\n");
	write(2, "Error\n", 6);
	return (0);
}

int	check_input(int argc, char **argv)
{
	int cnt;
	int att;
	int x;

	x = 1;
	cnt = 0;
	att = 0;
	// Check if inputs are between 2 and 8
	if (argc < 3 || argc > 9)
		return(0);
	// Check char can be converted to int and if range
	while (argv[x] != '\0')
	{
		att = ft_atoi(argv[x]);
		if (att > 999 || att < 0)
		{
			// printf("ARGV value (%d) of position %d is out of range (0-999)\n", att, x);
			exit (0);
		}
		// printf("ARGV value of position %d, in INT is %d\n", x, att);
		x++;
	}
	return(1);
}