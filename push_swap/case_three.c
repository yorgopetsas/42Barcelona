/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:24:13 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/03/07 16:40:31 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	case_three(t_stack **stack, t_stack **stack_b)
{
	int	a;
	int	b;
	int	c;

	a = (*stack)->num;
	b = (*stack)->next->num;
	c = (*stack)->next->next->num;
	if (a > b)
	{
		if (b < c && c > a)
			scenario_1(stack, stack_b);
		else if (b > c && c < a)
			scenario_2(stack, stack_b);
		else if (b < c && c < a)
			scenario_3(stack, stack_b);
	}
	if (a < b)
	{
		if (b > c && c > a)
			scenario_4(stack, stack_b);
		else if (b > c && c < a)
			scenario_5(stack, stack_b);
	}
}
