/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_six.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:28:16 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/03/10 11:58:33 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	final_chunk_six(t_stack **stack_a, t_stack **stack_b, int ul)
{
	int		x;
	int		test;

	x = struct_lent(stack_a);
	test = x % 5;
	ul = ul - 5;
	while (test > 0)
	{
		ft_pab(stack_b, stack_a, 2);
		if ((*stack_b)->index < ul / 2)
			ft_rab(stack_b, stack_a, 2);
		test--;
	}
}

void	sort_ul_six(t_stack **stack_a, t_stack **stack_b, int ul, int chunk_size)
{
	int		ps;

	ps = 0;
	while (ps < chunk_size)
	{
		if ((*stack_a)->index >= ul)
			ft_rab(stack_a, stack_b, 1);
		if ((*stack_a)->index < ul)
		{
			ft_pab(stack_b, stack_a, 2);
			if ((*stack_b)->index < ul / 2)
				ft_rab(stack_b, stack_a, 2);
			ps++;
		}
		if ((*stack_a)->next == NULL)
			ps++;
	}
	if (struct_lent(stack_a) < chunk_size && (*stack_a) != NULL)
		final_chunk_six(stack_a, stack_b, ul);
}

void	back_to_a_six(t_stack **stack_a, t_stack **stack_b, int ul)
{
	int		ps;

	ps = 0;
	while ((*stack_b) != NULL)
	{
		if (is_biggiest(stack_b) == 1)
		{
			ft_pab(stack_a, stack_b, 1);
			if ((*stack_b)->next == NULL)
				ft_pab(stack_a, stack_b, 1);
			if ((*stack_a)->next != NULL
				&& (*stack_a)->index > (*stack_a)->next->index)
				ft_rab(stack_a, stack_b, 1);
		}
		ft_rab(stack_b, stack_a, 2);
	}
}

void	case_six(t_stack **stack_a, t_stack **stack_b)
{
	int		ul;
	int		x;
	int		chunk_size;
	int		l;

	ul = 5;
	x = 0;
	chunk_size = 5;
	l = struct_lent(stack_a) / chunk_size ;
	printf("Case Six\n");
	while (x < l)
	{
		ul = ul + 5;
		sort_ul_six(stack_a, stack_b, ul, chunk_size);
		x++;
	}
	x = 0;
	ul = 0;
	while (x < 1)
	{
		ul = ul + 5;
		back_to_a_six(stack_a, stack_b, ul);
		x++;
	}
}

	// yz_check_top(stack_b, stack_a);
	// x = is_ordered(stack_a);
	// if (x == 1)
	// 	printf("\n\nIs Ordered: Yes %d\n\n", x);
	// else
	// 	printf("\n\nIs Ordered: No %d\n\n", x);
