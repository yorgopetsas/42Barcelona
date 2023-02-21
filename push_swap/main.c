/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:04:13 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/21 22:17:17 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

ssize_t	startup(char **argv, int idx, int argc)
{
	printf("Number of input is %d\n", argc - 1);
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	// RESERVE MEMORY FOR THE STACKS
	stack_a = stack_mem(stack_a);
	stack_b = stack_mem(stack_b);

	fill_stack(&stack_a, idx, argv, argc);

	// fill_stack_b(&stack_b, idx, argv, argc);

	// CORRECT PLACE FOR NOW
	// put_index(&stack_a);
	// put_index(&stack_b);

	case_controler(&stack_a, &stack_b, argc);

	// FILL STACK A 
	// *stack_a = fill_stack(stack_a, idx, argv);
	// printf("This is Case %d\n", argc);
	// Case selection

	// FREE STACKS
	ft_free_stack(&stack_a);
	ft_free_stack(&stack_b);
	return (1);
}

int	main(int argc, char **argv)
{
	int	idx;
	int	status;

	idx = 1;
	status = 1;
	status = check_input(argc, argv);
	if (status == 0)
	{
		printf("Number of input is Wrong\n");
		exit (0);
	}
	// Iinitiate stacks a & b
	startup(argv, idx, argc);
	exit (0);
	return (0);
}
