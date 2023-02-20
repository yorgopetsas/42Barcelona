/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:25:12 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/20 14:48:42 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	case_two(t_stack **stack, t_stack **stack_b)
{
	if ((*stack)->num > (*stack)->next->num)
		ft_rab(stack, stack_b);
}
