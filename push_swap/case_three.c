/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:24:13 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/19 14:25:51 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

// I compare top to middle, middle to bottom, and bottom to top
void	case_three(t_stack **stack)
{
	
	if (!((*stack)->num > (*stack)->next->num))
	 	if (!((*stack)->next->num > (*stack)->next->next->num))
	 	{
	 		if (!((*stack)->next->next->num < (*stack)->num))
	 		{
	 			printf("All Good!\n");
	 			show_stack(stack, stack);
	 			exit(0);
	 		}
	 	}
	 	printf("No Good2!\n");
	 	ft_rrab(stack, stack);
	 	printf("RRAB\n");
	 	if (((*stack)->num > (*stack)->next->num))
	 	{
		 	// case_three(stack);
			ft_sw(stack);
			printf("SW\n");
			show_stack(stack, stack);
		}
	ft_rrab(stack, stack);
	printf("RRAB\n");
	show_stack(stack, stack);
	if (!((*stack)->num > (*stack)->next->num))
		printf("No Good3!\n");
	printf("Good3!\n");
	// show_stack(stack, stack);
}