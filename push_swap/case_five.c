/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:24:18 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/20 15:13:36 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	case_five(t_stack **stack_a, t_stack **stack_b)
{
	ft_pab(stack_b, stack_a);
	ft_pab(stack_b, stack_a);
	case_three(stack_a, stack_b);
	ft_pab(stack_a, stack_b);
	if ((*stack_a)->num > (*stack_a)->next->next->next->num)
		ft_rab(stack_a, stack_b);
	if ((*stack_a)->num > (*stack_a)->next->num)
	{
		printf("1 back bigger then 2");
		ft_sw(stack_a, stack_b);
	}
	if ((*stack_a)->next->num > (*stack_a)->next->next->num)
	{
		ft_pab(stack_b, stack_a);
		ft_sw(stack_a, stack_b);
		ft_pab(stack_a, stack_b);
	}
	ft_pab(stack_a, stack_b);
	if ((*stack_a)->num > (*stack_a)->next->next->next->next->num)
		ft_rab(stack_a, stack_b);
	else if ((*stack_a)->num > (*stack_a)->next->num)
		ft_sw(stack_a, stack_b);
	if ((*stack_a)->next->num > (*stack_a)->next->next->num)
	{
		ft_pab(stack_b, stack_a);
		ft_sw(stack_a, stack_b);
		ft_pab(stack_a, stack_b);
	}
	if ((*stack_a)->next->next->num > (*stack_a)->next->next->next->num)
	{
		ft_pab(stack_b, stack_a);
		ft_pab(stack_b, stack_a);
		ft_sw(stack_a, stack_b);
		ft_pab(stack_a, stack_b);
		ft_pab(stack_a, stack_b);
	}
	show_stack(stack_a, stack_b);
}


// 5

// 3
// 4
// 8


	// a = (*stack)->num;
	// b = (*stack)->next->num;
	// c = (*stack)->next->next->num;
// LONG VERSION
// void	case_five(t_stack **stack_a, t_stack **stack_b)
// {
// 	ft_pab(stack_b, stack_a);
// 	// show_stack(stack_a, stack_b);
// 	ft_pab(stack_b, stack_a);
// 	// show_stack(stack_a, stack_b);
// 	case_three(stack_a, stack_b);
// 	ft_pab(stack_a, stack_b);
// 	// show_stack(stack_a, stack_b);
// 	if ((*stack_a)->num > (*stack_a)->next->next->next->num)
// 	{
// 		ft_rab(stack_a, stack_b);
// 		show_stack(stack_a, stack_b);
// 	}
// 	if ((*stack_a)->num > (*stack_a)->next->num)
// 		ft_sw(stack_a, stack_b);
// 	if ((*stack_a)->next->num > (*stack_a)->next->next->num)
// 	{
// 		ft_pab(stack_b, stack_a);
// 		show_stack(stack_a, stack_b);
// 		ft_sw(stack_a, stack_b);
// 		ft_pab(stack_a, stack_b);
// 		show_stack(stack_b, stack_a);
// 	}
// 	ft_pab(stack_a, stack_b);
// 	show_stack(stack_a, stack_b);
// 	//
// 	if ((*stack_a)->num > (*stack_a)->next->next->next->next->num)
// 	{
// 		ft_rab(stack_a, stack_b);
// 		show_stack(stack_a, stack_b);
// 	}
// 	else if ((*stack_a)->num > (*stack_a)->next->num)
// 		ft_sw(stack_a, stack_b);
// 	if ((*stack_a)->next->num > (*stack_a)->next->next->num)
// 	{
// 		ft_pab(stack_b, stack_a);
// 		show_stack(stack_a, stack_b);
// 		ft_sw(stack_a, stack_b);
// 		ft_pab(stack_a, stack_b);
// 		show_stack(stack_a, stack_b);
// 	}
// 	if ((*stack_a)->next->next->num > (*stack_a)->next->next->next->num)
// 	{
// 		ft_pab(stack_b, stack_a);
// 		show_stack(stack_a, stack_b);
// 		ft_pab(stack_b, stack_a);
// 		show_stack(stack_a, stack_b);
// 		ft_sw(stack_a, stack_b);
// 		ft_pab(stack_a, stack_b);
// 		show_stack(stack_a, stack_b);
// 		ft_pab(stack_a, stack_b);
// 		show_stack(stack_a, stack_b);
// 	}
// }