/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_three_scenarios.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:33:06 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/19 17:04:36 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	scenario_1(t_stack **stack)
{
	ft_sw(stack);
	exit(0);
}

void	scenario_2(t_stack **stack)
{
	ft_sw(stack);
	ft_rrab(stack, stack);
	exit(0);
}

void	scenario_3(t_stack **stack)
{
	ft_rab(stack);
	exit(0);
}

void	scenario_4(t_stack **stack)
{
	ft_sw(stack);
	ft_rab(stack);
	exit(0);
}

void	scenario_5(t_stack **stack)
{
	ft_rrab(stack, stack);
	exit(0);
}
