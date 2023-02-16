/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:02:24 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/16 22:53:46 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

// FUNCTION SWAPS THE TWO FIRST ELEMENTS OF A STACK

// -- SA(swap a) & SB(swap b) 
// Swap the first 2 elements at the top of a stack. 
// Do nothing if there is only one or no elements.

void	ft_sw(t_stack **stack)
{
	show_stack(stack, stack);
	// WHY have to make tmp and why the syntax (*stack)->next
	t_stack	*tmp;

	if ((*stack) && ((*stack)->next))
	{
		tmp = (*stack)->next;
		(*stack)->next = tmp->next;
		tmp->next = *(stack);
		show_stack(stack, stack);
		// write(1, "sb\n", 3);
	}
}

// RRAB & RRA
// FUNCTION TO SHIFT DOWN ALL THE ELEMENTS OF THE STACK 
// (The last element becomes the first one.)
// ??? rrab, rrb (reverse rotate b): Shift down all elements of stack b by 1.
// rra (reverse rotate a): Shift down all elements of stack a by 1.

void	ft_rrab(t_stack **stack, t_stack **stack_b)
{
	show_stack(stack, stack_b);

	t_stack	*tmp;
	t_stack	*tmp2;

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
	}
	show_stack(stack, stack_b);
}

// RA & RB
// FUNCTION TO SHIFT UP ALL THE ELEMENTS OF THE STACK 
// (The first element becomes the last one.)

void	ft_rab(t_stack **stack)
{
	show_stack(stack, stack);

	t_stack	*tmp;

	if (*stack && ((*stack)->next))
	{
		tmp = *stack;
		*stack = (*stack)->next;
		add_at_end(stack, tmp);
		tmp->next = NULL;
	}
	// put_index(stack);
	show_stack(stack, stack);
}


// PAB & PBA
// pa (push a): Take the first element at the top of b and put it at the top of a.
// Do nothing if b is empty.
// ft_pab & ft_pba: Take the first element at the top of a(origin) and put it at the top of b(destination).
// Do nothing if a is empty.

void	ft_pab(t_stack **stack_dest, t_stack **stack_origin)
{
	t_stack	*tmp;

	show_stack(stack_origin, stack_dest);
	if (*stack_origin && *stack_dest)
	{
		tmp = *stack_origin;
		(*stack_origin) = (*stack_origin)->next;
		tmp->next = *stack_dest;
		*stack_dest = tmp;
	}
	else if (*stack_origin && !(*stack_dest))
	{
		*stack_dest = *stack_origin;
		*stack_origin = (*stack_origin)->next;
		(*stack_dest) = NULL;
	}
	show_stack(stack_origin, stack_dest);
}

// rr : ra and rb at the same time.
// rrr : rra and rrb at the same time.
// ss : sa and sb at the same time.

