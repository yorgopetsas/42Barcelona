/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_hun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 20:15:40 by yzisis-p          #+#    #+#             */
/*   Updated: 2023/04/04 17:25:38 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	final_chunk(t_stack **stack_a, t_stack **stack_b, unsigned long ul)
{
	int		x;
	int		chk;

	// printf("Final Chunk");
	x = struct_lent(stack_b);
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

void	sort_ul(t_stack **stack_a, t_stack **stack_b, unsigned long ul, unsigned long chunk_size)
{
	unsigned long	ps;

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

void	back_to_a(t_stack **stack_a, t_stack **stack_b, unsigned long ul, unsigned long chunk_size)
{
	int		ps;
	unsigned long		limit;

	ps = 0;
	limit = ul - chunk_size;
	while ((*stack_b)->index > 90)
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
		else if ((*stack_b)->next->index > 90)
		{
			ft_rab(stack_b, stack_a, 2);
		}
	}	
}

void	case_hun(t_stack **stack_a, t_stack **stack_b)
{
	unsigned long	ul;
	unsigned long	chunk_size;
	int		x;
	int		l;

	ul = 0;
	x = 0;
	chunk_size = struct_lent(stack_a) / 5;
	l = struct_lent(stack_a) / chunk_size;
	while (x < l)
	{
		ul = ul + 20;
		sort_ul(stack_a, stack_b, ul, chunk_size);
		show_stack(stack_a, stack_b);
		x++;
	}
	x = 0;
	while (x <= l)
	{
		ul = struct_lent(stack_b);
		back_to_a(stack_a, stack_b, ul, chunk_size);
		x++;
	}
}
