/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:04:13 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/07 23:59:39 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"


t_stack *stack_mem(t_stack *stack)
{
	stack = malloc(sizeof(t_stack) * 1);
	if (!stack)
		return (stack);
	return (stack);
}

t_stack	fill_stack(t_stack *stack, int idx, char **argv)
{
	stack->num = (argv[idx][0] - 48);
	stack->index = idx;
	stack->next = NULL;
	return(stack[0]);
}

ssize_t	startup(char **argv, int idx)
{
	t_stack *stack_a;
	t_stack *stack_b;

	stack_a = NULL;
	stack_b = NULL;

	// RESERVE MEMORY FOR THE STACKS
	stack_a = stack_mem(stack_a);
	stack_b = stack_mem(stack_b);

	// FILL STACKS
	*stack_a = fill_stack(stack_a, idx, argv);
	*stack_b = fill_stack(stack_a, idx, argv);	

	// PRINT STACKS

	printf("Stack A Position: %zu Value is %d\t|\tStack B Position: %zu Value is %d\n", 
		stack_a->index, stack_a->num, stack_b->index, stack_b->num);

	printf("Next element is %p\n", (stack_a->next));
	// FREE STACKS
	// free(&stack_a);
	// free(&stack_b);
	return (1);
}

// size_t	check_input(char **input);


// FUNTION TO SHOW THE ERROR MSG AND RETURN -1
size_t	ft_error_free(t_stack **stack_a, t_stack **stack_b)
{
	// ft_free(stack_a);
	// ft_free(stack_b);
	return (0);
}

// FUNTION TO SHOW THE ERROR MSG AND RETURN -1
size_t	ft_error(void)
{
	printf("3\n");
	write(2, "Error\n", 6);
	return (0);
}

int	main(int argc, char **argv)
{
	printf("Number of input is %d\n", argc - 1);
	int idx;
	idx = 1;
	while (argv[idx] != '\0')
	{
		startup(argv, idx);
		idx++;
		// printf("ARGV is %c\n", argv[idx][0]);
	}

	// BRUNOS WAY STEP 1
	// if (argc > 1)
	// {
	// 	if (!startup(argv))
	// 	{
	// 		printf("1\n");
	// 		return (ft_error());
	// 	}
	// 	else
	// 	{
	// 		printf("2\n");
	// 		return (ft_error());
	// 	}
	// }
	// else
	// {
	// 	return(0);
	// }

	exit (0);
	return (0);
}