/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_hun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 20:15:40 by yzisis-p          #+#    #+#             */
/*   Updated: 2023/03/08 14:01:50 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
// TABLA RASA
void	sort_ul(t_stack **stack_a, t_stack **stack_b, int ul)
{
	t_stack	*cnt;
	int		ps;

	cnt = *stack_a;
	cnt = stack_mem(cnt);
	ps = 0;
	
	// show_stack(stack_a, stack_b);
	while (ps < ul)
	{
		if ((*stack_a)->num > ul)
		{
			ft_rab(stack_a, stack_b, 1);
			printf("1st while/if\n");
			// ps++;
		}
		if ((*stack_a)->num <= ul)
		{
			ft_pab(stack_b, stack_a, 2);
			printf("2nd if\n");
			if ((*stack_b)->num < ul / 2)
				ft_rrab(stack_b, stack_a, 2);
			// 	ft_pab(stack_b, stack_a, 2);
			// else
			// {
			// 	ft_pab(stack_b, stack_a, 2);
			// 	ft_rrab(stack_b, stack_a, 2);
			// }
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
	int		tmp;

	ul = 0;
	x = 0;
	// show_stack(stack_a, stack_b);
	tmp = struct_lent(stack_a);
	printf("Final Lenght is: %d\n", tmp);

	// while (x < 1)
	// {
	// 	ul = ul + 20;
	// 	sort_ul(stack_a, stack_b, ul);
	// 	x++;
	// }
	// show_stack(stack_a, stack_b);
	// ul = 80;
	// while (x < 5)
	// {
	// 	back_to_a(stack_a, stack_b, ul);
	// 	ul = ul - 20;
	// 	x++;
	// }
	
}

// END TABLA RASA