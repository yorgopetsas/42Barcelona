/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 12:02:24 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/16 19:27:47 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

// FUNCTION SWAPS THE TWO FIRST ELEMENTS OF THE STACK

// SA (swap a): Swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.

void	ft_sa(t_stack **stack)
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


// FUNCTION TO SHIFT DOWN ALL THE ELEMENTS OF THE STACK
void	ft_rrab(t_stack **stack)
{
	show_stack(stack, stack);

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
	show_stack(stack, stack);
}


// FUNCTION TO SHIFT UP ALL THE ELEMENTS OF THE STACK
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


// sb (swap b): Swap the first 2 elements at the top of stack b.
// Do nothing if there is only one or no elements.

int	sb();

// ss : sa and sb at the same time.

int ss();

// pa (push a): Take the first element at the top of b and put it at the top of a.
// Do nothing if b is empty.

int	pa();


// pb (push b): Take the first element at the top of a and put it at the top of b.
// Do nothing if a is empty.

int	pb();


// ra (rotate a): Shift up all elements of stack a by 1.
// The first element becomes the last one.

int	ra();


// rb (rotate b): Shift up all elements of stack b by 1.
// The first element becomes the last one.

int	rb();

// rr : ra and rb at the same time.
int	rr();

// rra (reverse rotate a): Shift down all elements of stack a by 1.
// The last element becomes the first one.

int	rra();


// rrb (reverse rotate b): Shift down all elements of stack b by 1.
// The last element becomes the first one.

int	rrb();


// rrr : rra and rrb at the same time.

int	rrr();