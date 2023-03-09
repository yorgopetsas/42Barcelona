/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_sd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:07:20 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/03/09 18:54:59 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	case_sd(t_stack **stack_a, t_stack **stack_b)
{	
	while (struct_lent(stack_a) > 5)
	{
		if (is_biggiest(stack_a) == 1)
			ft_pab(stack_b, stack_a, 2);
		else
			ft_rab(stack_a, stack_b, 1);
	}
	case_five(stack_a, stack_b);
	while ((*stack_b) != NULL)
	{
		ft_pab(stack_a, stack_b, 1);
		ft_rab(stack_a, stack_b, 1);
	}
}
