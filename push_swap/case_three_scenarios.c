/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_three_scenarios.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:33:06 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/03/06 17:08:50 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	scenario_1(t_stack **stack, t_stack **stack_b)
{
	ft_sw(stack, stack_b, 1);
	return (1);
}

int	scenario_2(t_stack **stack, t_stack **stack_b)
{
	ft_sw(stack, stack_b, 1);
	ft_rrab(stack, stack_b, 1);
	return (1);
}

int	scenario_3(t_stack **stack, t_stack **stack_b)
{
	ft_rab(stack, stack_b, 1);
	return (1);
}

int	scenario_4(t_stack **stack, t_stack **stack_b)
{
	ft_sw(stack, stack_b, 1);
	ft_rab(stack, stack_b, 1);
	return (1);
}

int	scenario_5(t_stack **stack, t_stack **stack_b)
{
	ft_rrab(stack, stack_b, 1);
	return (1);
}
