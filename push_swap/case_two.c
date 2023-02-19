/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_two.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:25:12 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/19 14:25:32 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	case_two(t_stack **stack)
{
	// printf("2 arguments case\n");
	// printf("stack->num: %d, \n", (*stack)->num);
	// printf("stack->next->num: %d, \n", (*stack)->next->num);
	if ((*stack)->num > (*stack)->next->num)
	{
		ft_rab(stack);
		printf("ra\n");
	}
	// show_stack(stack, stack);
}