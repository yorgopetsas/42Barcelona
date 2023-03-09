/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 11:06:29 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/03/09 20:13:48 by yorgopetsas      ###   ########.fr       */
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
	write(2, "Error\n", 6);
	return (-1);
}

void	char_is_digit(char **input, int argc)
{
	int	x;
	int	z;

	x = 1;
	z = 0;
	while (x < (argc))
	{
		if (ft_strlen(input[x]) > 1)
		{
			while (input[x][z] != '\0')
			{
				if (input[x][z] < '0' || input[x][z] > '9')
				{
					write(2, "Error\n", 6);
					exit (0);
				}
				z++;
			}
			z = 0;
		}
		x++;
	}
}

void	ft_check_doubles(char **argv)
{
	int	cont1;
	int	cont2;

	cont1 = 1;
	cont2 = 1;
	while (argv[cont1])
	{
		cont2 = cont1 + 1;
		while (argv[cont2])
		{
			if (ft_strncmp(argv[cont1], argv[cont2]) == 0)
			{
				write(2, "Error\n", 6);
				exit(0);
			}
			else
				cont2++;
		}
		cont1++;
	}
}

int	check_input(int argc, char **argv)
{
	int	att;
	int	x;

	x = 1;
	if (argc == 1)
		exit (0);
	if (argc < 3 || argc > 501)
		return (0);
	while (argv[x] != NULL)
	{
		att = ft_atoi(argv[x]);
		if ((ft_strlen(argv[x]) >= 11 && att >= 0) || ft_strlen(argv[x]) >= 12)
			return (0);
		else if (ft_strlen(argv[x]) == 10)
		{
			if (ft_strncmp(argv[x], "2147483647") > 0 || (argv[x][0] == '-'
				&& ft_strncmp(argv[x], "-2147483648") > 0))
				return (0);
		}
		x++;
	}
	return (1);
}

// int	ft_check_digits(char **argv)
// {
// 	int		x;
// 	int		t;
// 	x = 1;
// 	t = 0;
// 	while (argv[x])
// 	{
// 		while (argv[x][t])
// 		{		
// 			if (!ft_atoi(&argv[x][t]))
// 			{
// 				write(2, "Error\n", 6);
// 				exit(0);
// 			}
// 			t++;
// 		}
// 		t = 0;
// 		x++;
// 	}
// 	return (0);
// }