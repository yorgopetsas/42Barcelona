/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:24:13 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/19 15:56:38 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

// I compare top to middle, middle to bottom, and bottom to top
void	case_three(t_stack **stack)
{
	int a;
	int b;
	int c;

	a = (*stack)->num;
	b = (*stack)->next->num;
	c = (*stack)->next->next->num;

	if (a > b)
	{
		//Scenario 1
		if (b < c && c > a)
		{
			printf("Scenario 1\n");
			//sa
			ft_sw(stack);
			printf("SA\n");
			show_stack(stack, stack);
			exit(0);
		}

		//Scenario 2	
		else if ((*stack)->num > (*stack)->next->num && (*stack)->next->num > (*stack)->next->next->num)
		{
			printf("Scenario 2\n");
			//sa
			ft_sw(stack);
			printf("SA\n"); 
			//rra
			ft_rrab(stack, stack);
			printf("RRA\n");
			show_stack(stack, stack);
			exit(0);
		}
		
		//Scenario 3
		else if ((*stack)->num > (*stack)->next->num && (*stack)->next->num < (*stack)->next->next->num)
		{
			printf("Scenario 3\n");
			//ra
			ft_rab(stack);
			printf("RA\n");
			show_stack(stack, stack);
			exit(0);
		}
	}

	else if (a < b)
	{
		if ((*stack)->num < (*stack)->next->num && (*stack)->next->num < (*stack)->next->next->num)
		{
			printf("All Good!\n");
			show_stack(stack, stack);
			exit(0);
		}

		//Scenario 4
		else if (b > c && c > a)
		{
			printf("Scenario 4\n");
			//sa
			ft_sw(stack);
			printf("SA\n");
			//ra
			ft_rab(stack);
			printf("RA\n");
			show_stack(stack, stack);
			exit(0);
		}

		//Scenario 5
		else if (b > c && c < a)
		{
			printf("Scenario 5\n");
			//rra
			ft_rrab(stack, stack);
			printf("RRA\n");
			show_stack(stack, stack);
			exit(0);
		}
	}
}
