/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 12:01:10 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/03/09 19:07:34 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	yz_check_top(t_stack **stack_a, t_stack **stack_b)
{
	t_stack		*tmp;
	int			i;

	i = 1;
	tmp = *stack_a;
	if ((*tmp).num < (*tmp).next->num)
	{
		ft_sw(stack_b, stack_a, 2);
	}
}
