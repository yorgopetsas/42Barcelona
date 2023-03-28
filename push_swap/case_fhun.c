/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_fhun.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:24:31 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/03/10 12:53:01 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	final_chunk_fh(t_stack **stack_a, t_stack **stack_b, int final_chk)
{
	int		x;
	int		chk;

	x = struct_lent(stack_a);
	chk = x % 20;
	while (chk > 0)
	{
		ft_pab(stack_b, stack_a, 2);
		if ((*stack_b)->index < final_chk / 2)
		{
			ft_rab(stack_b, stack_a, 2);
		}
		chk--;
	}
}

void	sort_ul_fh(t_stack **stack_a, t_stack **stack_b, int ul, int final_chk)
{
	int		ps;

	ps = 0;
	while (ps < 20)
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
}

void	back_to_a_fh(t_stack **stack_a, t_stack **stack_b, int ul)
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

void	case_fhun(t_stack **stack_a, t_stack **stack_b)
{
	int		ul;
	int		x;
	int		chunks;
	int		final_chk;

	ul = 0;
	x = 0;
	chunks = struct_lent(stack_a) / 20;
	final_chk = struct_lent(stack_a) % 20;
	while (x < chunks)
	{
		ul = ul + 20;
		sort_ul_fh(stack_a, stack_b, ul, final_chk);
		x++;
	}
	if (final_chunk > 0)
		final_chunk_fh(stack_a, stack_b, final_chk);
	ul = 20;
	back_to_a_fh(stack_a, stack_b, ul);
	show_stack(stack_a, stack_b);

	// TMP TESTS
	x = is_ordered(stack_a);
	if (x == 1)
		printf("\n\nIs Ordered: Yes %d\n\n", x);
	else
		printf("\n\nIs Ordered: No %d\n\n", x);
	ft_free_stack(stack_b);
	// END TMP TESTS
}