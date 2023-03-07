/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:04:13 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/03/07 19:32:28 by yzisis-p         ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int		idx;
	int		status;

	idx = 1;
	status = 1;
	// input = ctr_arg(argc, argv);
	// i = 0;
	// while (i < 10)
	// {
	// 	printf("Input is:%s\n", input[i]);
	// 	i++;
	// }
	ft_check_doubles(argv);
	status = check_input(argc, argv);
	if (status == 0)
	{
		printf("Error\n");
		exit (0);
	}
	startup(argv, idx, argc);
	exit (0);
	return (0);
}
