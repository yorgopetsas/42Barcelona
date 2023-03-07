/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:04:13 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/03/07 23:11:32 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

ssize_t	startup(char **argv, int idx, int argc)
{
	// printf("Number of input is %d\n", argc - 1);
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	// RESERVE MEMORY FOR THE STACKS
	stack_a = stack_mem(stack_a);
	stack_b = stack_mem(stack_b);
	fill_stack(&stack_a, idx, argv, argc);
	put_index(&stack_a);
	// show_stack(&stack_a, &stack_b);
	// CASE SELECTION
	case_controler(&stack_a, &stack_b, argc);
	// FILL STACK A 
	// *stack_a = fill_stack(stack_a, idx, argv);
	// printf("This is Case %d\n", argc);
	show_stack(&stack_a, &stack_b);
	// FREE STACKS
	// ft_free_stack(&stack_a);
	// ft_free_stack(&stack_b);
	return (1);
}

void	ft_error_control(int argc, char **argv)
{
	int		status;

	status = 1;
	ft_check_doubles(argv);
	// GENERATES ERROR NEEDS FIXING
	// ft_check_digits(argv);
	status = check_input(argc, argv);
	if (status == 0)
	{
		printf("Error\n");
		exit (0);
	}
}

int	main(int argc, char **argv)
{
	int		idx;

	idx = 1;
	ft_error_control(argc, argv);
	startup(argv, idx, argc);
	exit (0);
}
