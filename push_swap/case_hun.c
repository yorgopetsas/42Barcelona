/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_hun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 20:15:40 by yzisis-p          #+#    #+#             */
/*   Updated: 2023/03/10 12:45:49 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	final_chunk(t_stack **stack_a, t_stack **stack_b, int ul)
{
	int		x;
	int		chk;

	x = struct_lent(stack_a);
	chk = x % 20;
	ul = ul - 20;
	while (chk > 0)
	{
		ft_pab(stack_b, stack_a, 2);
		if ((*stack_b)->index < ul - 10)
			ft_rab(stack_b, stack_a, 2);
		chk--;
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

void	case_hun(t_stack **stack_a, t_stack **stack_b)
{
	int		ul;
	int		x;
	int		chunk_size;
	int		l;

	ul = 0;
	x = 0;
	chunk_size = struct_lent(stack_a) / 5;
	l = struct_lent(stack_a) / chunk_size;
	printf("Case hun\n");
	while (x < l)
	{
		ul = ul + 20;
		sort_ul(stack_a, stack_b, ul, chunk_size);
		x++;
	}
	ul = 20;
	back_to_a(stack_a, stack_b, ul);
}
