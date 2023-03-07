/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:25:12 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/03/07 16:40:31 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	case_two(t_stack **stack, t_stack **stack_b)
{
	if ((*stack)->num > (*stack)->next->num)
		ft_rab(stack, stack_b, 1);
}
