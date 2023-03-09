/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_hun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 20:15:40 by yzisis-p          #+#    #+#             */
/*   Updated: 2023/03/09 14:39:25 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	final_chunk(t_stack **stack_a, t_stack **stack_b, int ul)
{
	int		x;
	int		test;

	x = struct_lent(stack_a);
	test = x % 20;
	ul = ul - 20;
	while (test > 0)
	{
		ft_pab(stack_b, stack_a, 2);
		if ((*stack_b)->index < ul - 10)
			ft_rab(stack_b, stack_a, 2);
		test--;
	}
}

void	sort_ul(t_stack **stack_a, t_stack **stack_b, int ul, int chunk_size)
{
	int		ps;

	ps = 0;
	while (ps < chunk_size - 1)
	{
		if ((*stack_a)->index >= ul)
			ft_rab(stack_a, stack_b, 1);
		if ((*stack_a)->index < ul)
		{
			ft_pab(stack_b, stack_a, 2);
			if ((*stack_b)->index < ul - 10)
				ft_rab(stack_b, stack_a, 2);
			ps++;
		}
	}
	if (struct_lent(stack_a) < chunk_size)
		final_chunk(stack_a, stack_b, ul);
}

void	back_to_a(t_stack **stack_a, t_stack **stack_b, int ul)
{
	int		ps;

	ps = 0;
	while ((*stack_b) != NULL)
	{
		// yz_check_top(stack_b, stack_a);
		if (is_biggiest(stack_b) == 1)
		{
			ft_pab(stack_a, stack_b, 1);
			if ((*stack_b)->next == NULL)
				ft_pab(stack_a, stack_b, 1);
			if ((*stack_a)->next != NULL
				&& (*stack_a)->index > (*stack_a)->next->index)
			{
				printf("A1 > A2\n");
				ft_rab(stack_a, stack_b, 1);
			}
		}
		ft_rab(stack_b, stack_a, 2);
	}
}

void	case_hun(t_stack **stack_a, t_stack **stack_b)
{
	int		ul;
	int		x;
	int		chunk_size;

	ul = 0;
	x = 0;
	chunk_size = struct_lent(stack_a) / 5;
	while (x < 5)
	{
		ul = ul + 20;
		sort_ul(stack_a, stack_b, ul, chunk_size);
		show_stack(stack_a, stack_b);
		x++;
	}
	x = 0;
	ul = 0;
	while (x < 1)
	{
		ul = ul + 20;
		back_to_a(stack_a, stack_b, ul);
		show_stack(stack_a, stack_b);
		x++;
	}
	x = is_ordered(stack_a);
	if (x == 1)
		printf("\n\nIs Ordered: Yes %d\n\n", x);
	else
		printf("\n\nIs Ordered: No %d\n\n", x);
}

// END TABLA RASA