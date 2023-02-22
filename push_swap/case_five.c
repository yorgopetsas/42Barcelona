/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:24:18 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/22 17:58:39 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	preapre_b(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a)->next->next->num > (*stack_b)->next->num
		&& (*stack_b)->num < (*stack_b)->next->num)
		ft_sw(stack_b, stack_a);
	if ((*stack_b)->num > (*stack_a)->next->next->num
		&& (*stack_b)->next->num > (*stack_a)->next->next->num)
	{
		if ((*stack_b)->num > (*stack_b)->next->num)
			ft_sw(stack_b, stack_a);
	}
}

void	pa_first(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a)->num > (*stack_a)->next->next->next->num)
		ft_rab(stack_a, stack_b);
	else if ((*stack_a)->num < (*stack_a)->next->next->next->num)
	{
		if ((*stack_a)->num > (*stack_a)->next->num)
		{
			ft_sw(stack_a, stack_b);
			if ((*stack_a)->next->num > (*stack_a)->next->next->num)
			{
				ft_pab(stack_b, stack_a);
				ft_sw(stack_a, stack_b);
				ft_pab(stack_a, stack_b);
			}
		}
	}
}

void	pa_third(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a)->next->next->num > (*stack_a)->next->next->next->num)
	{
		ft_rrab(stack_a, stack_b);
		ft_sw(stack_a, stack_b);
		ft_rab(stack_a, stack_b);
		ft_rab(stack_a, stack_b);
	}
}

void	pa_second(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a)->num > (*stack_a)->next->next->next->next->num)
		ft_rab(stack_a, stack_b);
	else if ((*stack_a)->num < (*stack_a)->next->next->next->next->num)
	{
		if ((*stack_a)->num > (*stack_a)->next->num)
		{
			ft_sw(stack_a, stack_b);
			if ((*stack_a)->next->num > (*stack_a)->next->next->num)
			{
				ft_pab(stack_b, stack_a);
				ft_sw(stack_a, stack_b);
				ft_pab(stack_a, stack_b);
				pa_third(stack_a, stack_b);
			}
		}
	}
}

void	case_five(t_stack **stack_a, t_stack **stack_b)
{
	ft_pab(stack_b, stack_a);
	ft_pab(stack_b, stack_a);
	case_three(stack_a, stack_b);
	preapre_b(stack_a, stack_b);
	ft_pab(stack_a, stack_b);
	pa_first(stack_a, stack_b);
	ft_pab(stack_a, stack_b);
	pa_second(stack_a, stack_b);
	show_stack(stack_a, stack_b);
}
