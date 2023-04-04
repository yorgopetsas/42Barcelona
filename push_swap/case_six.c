/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_six.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:28:16 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/04/04 19:19:34 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	final_chunk_six(t_stack **stack_a, t_stack **stack_b, unsigned long ul)
{
	int		x;
	int		test;

	if ((*stack_a) != NULL)
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

void	sort_ul_six(t_stack **stack_a, t_stack **stack_b, unsigned long ul, unsigned long chunk_size)
{
	unsigned long		ps;

	ps = 0;
	while (ps < chunk_size)
	{
		if ((*stack_a)->index >= ul)
			ft_rab(stack_a, stack_b, 1);
		else if ((*stack_a)->index < ul)
		{
			ft_pab(stack_b, stack_a, 2);
			if ((*stack_b)->index < ul - (chunk_size / 2))
				ft_rab(stack_b, stack_a, 2);
			ps++;
		}
		if ((*stack_a)->next == NULL)
			ps++;
	}
	if (struct_lent(stack_a) < chunk_size && (*stack_a) != NULL)
		final_chunk_six(stack_a, stack_b, ul);
}

void	back_to_a_six(t_stack **stack_a, t_stack **stack_b, unsigned long chunk_size)
{
	unsigned long		limit;
	unsigned long		ps;
	int					mv;

	ps = 0;
	// printf("b1 \n");
	if ((*stack_b) != NULL)
		limit = struct_lent(stack_b) - chunk_size;
	// printf("b2 \n");
	while (ps < chunk_size && (*stack_b) != NULL)
	{
		if ((*stack_b)->next == NULL)
		{
			ft_pab(stack_a, stack_b, 1);
			ps = chunk_size;
		}
		else if (is_biggiest(stack_b) == 1)
		{
			ft_pab(stack_a, stack_b, 1);
			ps++;
		}
		else if ((*stack_b)->next->index < limit && ps < chunk_size)
		{
			ft_rrab(stack_b, stack_a, 2);
			if (is_biggiest(stack_b) == 1)
			{
				ft_pab(stack_a, stack_b, 1);
				ps++;
			}
		}
		else if ((*stack_b)->index >= limit && ps < chunk_size)
		{
			ft_rab(stack_b, stack_a, 2);
			if (is_biggiest(stack_b) == 1)
			{
				ft_pab(stack_a, stack_b, 1);
				ps++;
			}
		}

		else if ((*stack_b)->index < limit && ps < chunk_size)
		{
			while ((*stack_b)->index < limit && ps < chunk_size)
				ft_rrab(stack_b, stack_a, 2);
		}
		limit = limit - chunk_size;
		if ((*stack_b) == NULL)
			ps = chunk_size;

		// show_stack(stack_a, stack_b);
	}
}

void	case_six(t_stack **stack_a, t_stack **stack_b)
{
	unsigned long		ul;
	unsigned long		chunk_size;
	int					x;
	int					l;

	ul = 0;
	x = 0;
	chunk_size = 10;
	l = struct_lent(stack_a) / chunk_size;
	while (x < l)
	{
		ul = ul + chunk_size;
		sort_ul_six(stack_a, stack_b, ul, chunk_size);
		x++;
	}
	x = 0;
	ul = 0;
	while (x <= l)
	{
		ul = ul + chunk_size;
		back_to_a_six(stack_a, stack_b, chunk_size);
		x++;
	}
	// show_stack(stack_a, stack_b);
}
