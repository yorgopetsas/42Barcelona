/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:06:29 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/27 22:29:12 by yzisis-p         ###   ########.fr       */
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
	if (argc < 3 || argc > 502)
		return (0);
	while (argv[x] != '\0')
	{
		att = ft_atoi(argv[x]);
		if (att > 999 || att < 0)
			exit (0);
		x++;
	}
	return (1);
}
