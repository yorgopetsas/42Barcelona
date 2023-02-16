/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:59:44 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/17 00:03:58 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_controler(t_stack **stack, int argc)
{
	if (argc <= 4)
		 case_two(stack);
	if (argc <= 5)
		 case_three(stack);
}

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

// I compare top to middle, middle to bottom, and bottom to top
void	case_three(t_stack **stack)
{
	show_stack(stack, stack);
	if (!((*stack)->num > (*stack)->next->num))
	 	if (!((*stack)->next->num > (*stack)->next->next->num))
	 		if (!((*stack)->next->next->num < (*stack)->num))
	 			printf("All Good!\n");
	 			exit(0);
	 		printf("No Good!\n");
	 	printf("No Good!\n");
	printf("No Good!\n");
	ft_sw(stack);
	ft_rrab(stack, stack);
	// show_stack(stack, stack);
	// printf("No Good!\n");
}