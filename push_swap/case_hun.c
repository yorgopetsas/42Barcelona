/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_hun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 20:15:40 by yzisis-p          #+#    #+#             */
/*   Updated: 2023/03/06 20:17:54 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
// TABLA RASA
void	sort_ul(t_stack **stack_a, t_stack **stack_b, int ul)
{
	t_stack	*cnt;
	int		ps;

	cnt = stack_mem(cnt);
	ps = 0;
	cnt = *stack_a;
	show_stack(stack_a, stack_b);
	while (ps < ul)
	{
		if ((*stack_a)->num > ul)
		{
			ft_rab(stack_a, stack_b, 1);
			// printf("1st while/if");
		}
		else if ((*stack_a)->num <= ul)
		{
			if ((*stack_a)->num < ul / 2)
				ft_pab(stack_b, stack_a, 2);
			else
			{
				ft_pab(stack_b, stack_a, 2);
				ft_rrab(stack_b, stack_a, 2);
			}
			ps++;
		}
	}
}

void	back_to_a(t_stack **stack_a, t_stack **stack_b, int ul)
{
	int		ps;

	ps = 0;
	while ((*stack_b)->num > ul)
	{
		ft_pab(stack_a, stack_b, 1);
		if ((*stack_a)->num > ul + 10)
		{
			ft_rrab(stack_a, stack_a, 2);
		}
		ps++;
	}
}

void	case_hun(t_stack **stack_a, t_stack **stack_b)
{
	int		ul;
	int		x;

	ul = 0;
	x = 0;
	while (x < 5)
	{
		ul = ul + 20;
		sort_ul(stack_a, stack_b, ul);
		x++;
	}
	// show_stack(stack_a, stack_b);
	ul = 80;
	while (x < 5)
	{
		back_to_a(stack_a, stack_b, ul);
		ul = ul - 20;
		x++;
	}
	// show_stack(stack_a, stack_b);
}

// END TABLA RASA