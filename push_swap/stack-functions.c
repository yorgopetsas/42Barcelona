/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack-functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:47:35 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/22 18:25:20 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

t_stack	*stack_mem(t_stack *stack)
{
	stack = malloc(sizeof(t_stack) * 1);
	if (!stack)
		return (stack);
	return (stack);
}

size_t	fill_stack(t_stack **stack_a, int idx, char **input, int argc)
{
	size_t	x;

	x = 1;
	if (idx == 1)
	{
		*stack_a = create_cont(ft_atoi(input[x]));
		x++;
		idx++;
	}
	while (x < (argc))
	{
		add_at_end(stack_a, create_cont(ft_atoi(input[x])));
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

t_stack	*create_cont(int num)
{
	t_stack	*new_item;

	new_item = malloc(sizeof(t_stack) * 1);
	if (!new_item)
		return (0);
	new_item->num = num;
	new_item->next = NULL;
	return (new_item);
}

size_t	add_at_end(t_stack **stack, t_stack *new_item)
{
	t_stack	*tmp;

	if (!new_item)
		return (0);
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new_item;
	return (1);
}
