/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_four.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 17:25:20 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/03/06 17:12:59 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	case_four(t_stack **stack_a, t_stack **stack_b)
{
	ft_pab(stack_b, stack_a, 2);
	case_three(stack_a, stack_b);
	put_index(stack_a);
	ft_pab(stack_a, stack_b, 1);
	if ((*stack_a)->num > (*stack_a)->next->next->next->num)
		ft_rab(stack_a, stack_b, 1);
	else if ((*stack_a)->num > (*stack_a)->next->num)
		ft_sw(stack_a, stack_b, 1);
	if ((*stack_a)->next->num > (*stack_a)->next->next->num)
	{
		ft_pab(stack_b, stack_a, 2);
		ft_sw(stack_a, stack_b, 1);
		ft_pab(stack_a, stack_b, 1);
	}
}
