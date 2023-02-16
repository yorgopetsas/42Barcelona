/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:59:44 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/16 23:32:12 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_controler(t_stack **stack, int argc)
{
	if (argc <= 4)
		 case_two(stack);
}

void	case_two(t_stack **stack)
{
	printf("2 arguments case\n");
	printf("stack->num: %d, \n", (*stack)->num);
	printf("stack->next->num: %d, \n", (*stack)->next->num);
	if ((*stack)->num > (*stack)->next->num)
	{
		ft_rab(stack);
		printf("ra\n");
	}
	show_stack(stack, stack);
}

// void	case_three(t_stack **stack)
// {


// }