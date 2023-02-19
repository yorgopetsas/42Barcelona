/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cases.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 22:59:44 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/19 14:20:24 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_controler(t_stack **stack, int argc)
{
	if (argc <= 4)
		 case_two(stack);
	if (argc <= 5)
		 case_three(stack);
	if (argc <= 7)
		 case_five(stack);
	if (argc <= 102)
		 case_hun(stack);
	if (argc <= 502)
		 case_fhun(stack);
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

void	case_five(t_stack **stack)
{
	printf("5 arguments case\n");
}

void	case_hun(t_stack **stack)
{
	printf("100 arguments case\n");
}

void	case_fhun(t_stack **stack)
{
	printf("500 arguments case\n");
}