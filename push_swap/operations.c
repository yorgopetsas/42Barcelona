/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:02:24 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/19 16:55:20 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

// FUNCTION SWAPS THE TWO FIRST ELEMENTS OF A STACK
// sa & sb
// 1.sa (swap a): Swap the first 2 elements at the top of stack a.
//   sb (swap b): Swap the first 2 elements at the top of stack b.
// Do nothing if there is only one or no elements.
// ss : sa and sb at the same time.

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
		*stack = tmp;
		// show_stack(stack, stack);
		// write(1, "sb\n", 3);
	}
	show_stack(stack, stack);
}

// FUNCTION TO SHIFT DOWN ALL THE ELEMENTS OF THE STACK 
// rra & rrb 
// 4.rra (reverse rotate a): Shift down all elements of stack a by 1.
//   rrb (reverse rotate b): Shift down all elements of stack b by 1.
// The last element becomes the first one.
// rrr : rra and rrb at the same time.	

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

// FUNCTION TO SHIFT UP ALL THE ELEMENTS OF THE STACK 
// ra & rb
// 3.ra (rotate a): Shift up all elements of stack a by 1.
//   rb (rotate b): Shift up all elements of stack b by 1.
// The first element becomes the last one.
// rr : ra and rb at the same time.

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

// FUNCTION THAT TAKES THE FIRST ELEMENT AT THE TOP OF STACK_ORIGIN AND PUTS IT AT THE TOP OF STACK_DEST
// pa & pb
// 2.pa (push a): Take the first element at the top of b and put it at the top of a.
//   pb (push b): Take the first element at the top of a and put it at the top of b.
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
