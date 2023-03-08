/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_hun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 20:15:40 by yzisis-p          #+#    #+#             */
/*   Updated: 2023/03/08 18:37:19 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
// TABLA RASA
void	sort_ul(t_stack **stack_a, t_stack **stack_b, int ul, int chunk_size)
{
	// t_stack	*cnt;
	int		ps;

	// cnt = *stack_a;
	// cnt = stack_mem(cnt);
	ps = 0;
	while (ps < chunk_size)
	{
		if ((*stack_a)->num > ul)
		{
			ft_rab(stack_a, stack_b, 1);
			// printf("1st while/if\n");
		}
		if ((*stack_a)->num <= ul)
		{
			ft_pab(stack_b, stack_a, 2);
			// printf("2nd if\n");
			if ((*stack_b)->num < ul - 10)
				ft_rab(stack_b, stack_a, 2);
			ps++;
		}
	}
}

void	back_to_a(t_stack **stack_a, t_stack **stack_b, int ul)
{
	int		ps;

	ps = 0;
	while ((*stack_b) != NULL)
	{
		if (is_biggiest(stack_b) == 1)
		{
			// printf("YEAH\n");
			ft_pab(stack_a, stack_b, 1);
			if ((*stack_b)->next == NULL)
			{
				// printf("END OF STACK_B\n");
				ft_pab(stack_a, stack_b, 1);
			}
			// show_stack(stack_a, stack_b);
			// if ((*stack_a)->next != NULL && (*stack_a)->num > (*stack_a)->next->num)
			// {
			// 	printf("A1 > A2\n");
			// 	// ft_rab(stack_a, stack_b, 1);
			// }
		}
		// if (is_biggiest(stack_b) != 0)
		// {
		// 	printf("NOO YEAH\n");
		// }
		ft_rab(stack_b, stack_a, 2);
	}
}

void	case_hun(t_stack **stack_a, t_stack **stack_b)
{
	int		ul;
	int		x;
	int		stk_len;
	int		chunk_size;

	ul = 0;
	x = 0;
	stk_len = struct_lent(stack_a);
	chunk_size = stk_len / 5;
	printf("Final Lenght is: %d\n", stk_len);
	while (x < 5)
	{
		ul = ul + 20;
		sort_ul(stack_a, stack_b, ul, chunk_size);
		// show_stack(stack_a, stack_b);
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
}

// END TABLA RASA