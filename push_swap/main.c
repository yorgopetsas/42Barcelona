/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:04:13 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/16 19:29:45 by yorgopetsas      ###   ########.fr       */
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

// FUNCTION FILLS THE STACK_A WITH THE INPUT
size_t  fill_stack(t_stack **stack_a, int idx, char **input, int argc)
{
	size_t	x;

	x = 1;
	if (idx == 1)
	{
		*stack_a = create_cont(ft_atoi(input[x]));
		// printf("Curren Stack index: %lu, and value%d\n", stack_a->index, stack_a->num);
		x++;
		idx++;
		// printf("Next Number %s\n", input[x]);
	}
	while (x < (argc - 1))
	{
		add_at_end(stack_a, create_cont(ft_atoi(input[x])));
		x++;
		// size_t	add_at_end(t_stack **stack, t_stack *new_item);
		// add_at_end(stack_a, ft_atoi(input[x]));
		// printf("Curren Stack index: %lu, and value%d\n", stack_a->index, stack_a->num);
		// printf("Next Number %s\n", input[x]);
	}
	return (1);
}

size_t  fill_stack_b(t_stack **stack_a, int idx, char **input, int argc)
{
	size_t	x;

	x = 1;
	if (idx == 1)
	{
		*stack_a = create_cont(0);
		x++;
		idx++;
	}
	while (x < (argc - 1))
	{
		add_at_end(stack_a, create_cont(0));
		x++;
	}
	return (1);
}

void	put_index(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = *stack;
	while (tmp)
	{
		tmp2 = *stack;
		tmp->index = 0;
		while (tmp2)
		{
			if (tmp->num > tmp2->num)
				tmp->index++;
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}
}


// FUNCTION CREATES A NEW STACK ITEM WITH THE NUM OF THE PARAMETER


t_stack	*create_cont(int num)
{
	t_stack	*new_item;

	new_item = malloc(sizeof(t_stack) * 1);
	if (!new_item)
		return (0);
	new_item->num = num;
	printf("New Item Num %d\n", new_item->num);
	new_item->next = NULL;
	return (new_item);
}

// FUNCTION ADDS AT THE END OF THE STACK
size_t	add_at_end(t_stack **stack, t_stack *new_item)
{
	t_stack	*tmp;

	if (!new_item)
		return (0);
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_item;
	printf("Next item link: %d\n", new_item->num);
	return (1);
}

ssize_t	startup(char **argv, int idx, int argc)
{
	printf("Number of input is %d\n", argc - 1);
	t_stack *stack_a;
	// t_stack *stack_b;

	stack_a = NULL;
	// stack_b = NULL;

	// RESERVE MEMORY FOR THE STACKS
	stack_a = stack_mem(stack_a);
	// stack_b = stack_mem(stack_b);

	fill_stack(&stack_a, idx, argv, argc);
	// fill_stack_b(&stack_b, idx, argv, argc);

	put_index(&stack_a);
	// printf("Stack A Position: %zu Value is %d\t\n", 
	// 	stack_a->index, stack_a->num);
	ft_rab(&stack_a);

	// void	ft_sa(t_stack **stack)
	// put_index(&stack_b);

	// idx++;
	// while (argv[idx] != '\0')
	// {
	// 	fill_stack(&stack_a, idx, argv, argc);
	// 	// printf("ARGV is %c\n", argv[idx][0]);
	// 	idx++;
	// }

	// show_stack(&stack_a, &stack_b);

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
	// free(&stack_a);
	// free(&stack_b);
	return (1);
}

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
			printf("ARGV value (%d) of position %d is out of range (0-999)\n", att, x);
			exit (0);
		}
		printf("ARGV value of position %d, in INT is %d\n", x, att);
		x++;
	}
	return(1);
}

int	ft_atoi(const char *nptr)
{
	int	num;
	int	symb;

	num = 0;
	symb = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-')
	{
		symb = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr >= 48 && *nptr <= 57)
	{
		num *= 10;
		num = num + (*nptr - 48);
		nptr++;
	}
	return (num * symb);
}

// function to see the stack, just a checker for the programer
void	show_stack(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*tmp2;
	tmp = *stack_a;
	tmp2 = *stack_b;
	printf("\n------------------------------\n");
	printf("\nSTACK A\t\t\tSTACK B");
	while (tmp || tmp2)
	{
		if (tmp)
		{
			printf("\n %d - %zu", tmp->num, tmp->index);
			tmp = tmp->next;
		}
		else
			printf("\n -");
		if (tmp2)
		{
			printf("\t\t\t%d - %zu", tmp2->num, tmp2->index);
			tmp2 = tmp2->next;
		}
		else
			printf("\t\t\t-");
	}
	printf("\n\n------------------------------\n");
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
