/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_three_scenarios.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:33:06 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/20 13:19:37 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	scenario_1(t_stack **stack, t_stack **stack_b)
{
	ft_sw(stack, stack_b);
	return (1);
}

int	scenario_2(t_stack **stack, t_stack **stack_b)
{
	ft_sw(stack, stack_b);
	ft_rrab(stack, stack_b);
	return (1);
}

int	scenario_3(t_stack **stack, t_stack **stack_b)
{
	ft_rab(stack, stack_b);
	return (1);
}

int	scenario_4(t_stack **stack, t_stack **stack_b)
{
	ft_sw(stack, stack_b);
	ft_rab(stack, stack_b);
	return (1);
}

int	scenario_5(t_stack **stack, t_stack **stack_b)
{
	ft_rrab(stack, stack_b);
	return (1);
}
