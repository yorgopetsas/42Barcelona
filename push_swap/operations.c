/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:02:24 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/03/07 22:38:30 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_sw(t_stack **stack, t_stack **stack_b, int state)
{
	t_stack	*tmp;

	tmp = *stack_b;
	if ((*stack) && ((*stack)->next))
	{
		tmp = (*stack)->next;
		(*stack)->next = tmp->next;
		tmp->next = *(stack);
		*stack = tmp;
		if (state == 1)
			write(1, "sa\n", 3);
		else
			write(1, "sb\n", 3);
	}
}

void	ft_rrab(t_stack **stack, t_stack **stack_b, int state)
{
	t_stack	*tmp;
	t_stack	*tmp2;

	tmp = *stack_b;
	if (*stack && ((*stack)->next))
	{
		tmp = *stack;
		tmp2 = tmp->next;
		while (tmp2->next)
		{
			tmp = tmp->next;
			tmp2 = tmp->next;
		}
		tmp->next = NULL;
		tmp2->next = *stack;
		*stack = tmp2;
		if (state == 1)
			write(1, "rra\n", 4);
		else
			write(1, "rrb\n", 4);
	}
}

void	ft_rab(t_stack **stack, t_stack **stack_b, int state)
{
	t_stack	*tmp;

	tmp = *stack_b;
	if (*stack && ((*stack)->next))
	{
		tmp = *stack;
		*stack = (*stack)->next;
		add_at_end(stack, tmp);
		tmp->next = NULL;
		if (state == 1)
			write(1, "ra\n", 3);
		else
			write(1, "rb\n", 3);
	}
}

void	ft_pab(t_stack **stack_dest, t_stack **stack_origin, int state)
{
	t_stack	*tmp;

	if (*stack_origin && *stack_dest)
	{
		tmp = *stack_origin;
		(*stack_origin) = (*stack_origin)->next;
		tmp->next = *stack_dest;
		*stack_dest = tmp;
		if (state == 1)
			write(1, "pa\n", 3);
		else
			write(1, "pb\n", 3);
	}
	else if (*stack_origin && !(*stack_dest))
	{
		*stack_dest = *stack_origin;
		*stack_origin = (*stack_origin)->next;
		(*stack_dest)->next = NULL;
		if (state == 1)
			write(1, "pa\n", 3);
		else
			write(1, "pb\n", 3);
	}
}
