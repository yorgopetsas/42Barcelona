/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:06:29 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/03/07 18:32:22 by yzisis-p         ###   ########.fr       */
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
	int	att;
	int	x;

	x = 1;
	if (argc == 1)
		exit (0);
	if (argc < 3 || argc > 502)
		return (0);
	while (argv[x] != NULL)
	{
		att = ft_atoi(argv[x]);
		if (strlen(argv[x]) >= 11 && att >= 0 || strlen(argv[x]) >= 12)
			return 0;
		else if (strlen(argv[x]) == 10)
		{
			if (strcmp(argv[x], "2147483647") > 0 || 
				(argv[x][0] == '-' && strcmp(argv[x], "-2147483648") > 0))
				return 0;
		}
		x++;
	}
	return (1);
}


// Errors include for example: some arguments aren’t integers or there are duplicates.
// strlen
// strcmp