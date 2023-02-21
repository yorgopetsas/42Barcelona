/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:24:13 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/21 14:29:41 by yorgopetsas      ###   ########.fr       */
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
	// show_stack(stack, stack_b);
}
