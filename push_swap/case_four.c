/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:25:20 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/22 18:01:07 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	case_four(t_stack **stack_a, t_stack **stack_b)
{
	ft_pab(stack_b, stack_a);
	case_three(stack_a, stack_b);
	put_index(stack_a);
	ft_pab(stack_a, stack_b);
	if ((*stack_a)->num > (*stack_a)->next->next->next->num)
		ft_rab(stack_a, stack_b);
	else if ((*stack_a)->num > (*stack_a)->next->num)
		ft_sw(stack_a, stack_b);
	if ((*stack_a)->next->num > (*stack_a)->next->next->num)
	{
		ft_pab(stack_b, stack_a);
		ft_sw(stack_a, stack_b);
		ft_pab(stack_a, stack_b);
	}
}
