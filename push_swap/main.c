/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:04:13 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/20 11:42:03 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

ssize_t	startup(char **argv, int idx, int argc)
{
	printf("Number of input is %d\n", argc - 1);
	t_stack *stack_a;
	t_stack *stack_b;

	stack_a = NULL;
	stack_b = NULL;

	// RESERVE MEMORY FOR THE STACKS
	stack_a = stack_mem(stack_a);
	stack_b = stack_mem(stack_b);

	fill_stack(&stack_a, idx, argv, argc);
	fill_stack_b(&stack_b, idx, argv, argc);

	put_index(&stack_a);
	put_index(&stack_b);

	// show_stack(&stack_a, &stack_b);
	
	case_controler(&stack_a, argc);

	// void	ft_sa(t_stack **stack)

	// idx++;
	// while (argv[idx] != '\0')
	// {
	// 	fill_stack(&stack_a, idx, argv, argc);
	// 	// printf("ARGV is %c\n", argv[idx][0]);
	// 	idx++;
	// }

	// FILL STACK A 
	// *stack_a = fill_stack(stack_a, idx, argv);
	// printf("This is Case %d\n", argc);
	// Case selection

	// if (argc > 1 && argc < 5)

		// printf("This is Case 1\n");

	// printf("\nContents of structure are %lu, %d\n", stack_a->index, stack_a->num);
	// printf("Next element is %p\n", (stack_a->next));

	// show_stack(&stack_a, &stack_a);

	// FREE STACKS
	free(&stack_a);
	free(&stack_b);
	return (1);
}

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

int	main(int argc, char **argv)
{
	int idx;
	int status;

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
