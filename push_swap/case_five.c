/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:24:18 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/21 21:43:57 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	preapre_b(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a)->next->next->num > (*stack_b)->next->num && 
		(*stack_b)->num < (*stack_b)->next->num) 
	{
		printf("I.5. Top of Stack B Smaller then Second in Stack B\n");
		ft_sw(stack_b, stack_a);
	}
	if ((*stack_b)->num > (*stack_a)->next->next->num && 
		(*stack_b)->next->num > (*stack_a)->next->next->num)
	{
		if ((*stack_b)->num > (*stack_b)->next->num)
		{
			printf("I.5. Top of Stack B Bigger then Second in Stack B\n");
			ft_sw(stack_b, stack_a);
		}
	}
}

void	pa_first(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a)->num > (*stack_a)->next->next->next->num)
	{
		printf("I.First Letter back Bigger than Last\n");
		ft_rab(stack_a, stack_b);
	}
	else if ((*stack_a)->num < (*stack_a)->next->next->next->num)
	{
		printf("I.First Letter back Smaller than Last\n");
		if ((*stack_a)->num > (*stack_a)->next->num)
		{
			printf("I.First Letter back Bigger than Second\n");
			ft_sw(stack_a, stack_b);
			if ((*stack_a)->next->num > (*stack_a)->next->next->num)
			{
				printf("I.First letter (now second) Bigger than Third\n");
				ft_pab(stack_b, stack_a);
				ft_sw(stack_a, stack_b);
				ft_pab(stack_a, stack_b);
			}
		}
	}
}

void	pa_second(t_stack **stack_a, t_stack **stack_b)
{
	if ((*stack_a)->num > (*stack_a)->next->next->next->next->num)
	{
		printf("II.Second Letter back Bigger than Last\n");
		ft_rab(stack_a, stack_b);
	}
	else if ((*stack_a)->num < (*stack_a)->next->next->next->next->num)
	{
		printf("II.Second Letter back Smaller than Last\n");
		if ((*stack_a)->num > (*stack_a)->next->num)
		{
			printf("II.Second Letter back Bigger than Second\n");
			ft_sw(stack_a, stack_b);
			if ((*stack_a)->next->num > (*stack_a)->next->next->num)
			{
				printf("II.Second letter (now second) Bigger than Third\n");
				ft_pab(stack_b, stack_a);
				ft_sw(stack_a, stack_b);
				ft_pab(stack_a, stack_b);
				if ((*stack_a)->next->next->num > (*stack_a)->next->next->next->num)
				{
					printf("II.Second letter back (now third) Bigger than Third\n");
					ft_rrab(stack_a, stack_b);
					ft_sw(stack_a, stack_b);
					ft_rab(stack_a, stack_b);
					ft_rab(stack_a, stack_b);
				}
			}
		}
	}
}

void	case_five(t_stack **stack_a, t_stack **stack_b)
{
	ft_pab(stack_b, stack_a);
	ft_pab(stack_b, stack_a);
	// printf("Start Case Three\n");
	case_three(stack_a, stack_b);
	// printf("End of Case Three\n");

	// Setup Stack B
	preapre_b(stack_a, stack_b);

	// Put first digit back to Stack A
	ft_pab(stack_a, stack_b);
	pa_first(stack_a, stack_b);

	// Put second digit back to Stack A
	ft_pab(stack_a, stack_b);
	pa_second(stack_a, stack_b);

	// show_stack(stack_a, stack_b);
}

	// if ((*stack_a)->next->next->num > (*stack_b)->next->num && 
	// 	(*stack_b)->num < (*stack_b)->next->num) 
	// {
	// 	printf("I.5. Top of Stack B Smaller then Second in Stack B\n");
	// 	ft_sw(stack_b, stack_a);
	// }
	// if ((*stack_b)->num > (*stack_a)->next->next->num && 
	// 	(*stack_b)->next->num > (*stack_a)->next->next->num)
	// {
	// 	if ((*stack_b)->num > (*stack_b)->next->num)
	// 	{
	// 		printf("I.5. Top of Stack B Bigger then Second in Stack B\n");
	// 		ft_sw(stack_b, stack_a);
	// 	}
	// }

	// if ((*stack_a)->num > (*stack_a)->next->next->next->num)
	// {
	// 	printf("I.First Letter back Bigger than Last\n");
	// 	ft_rab(stack_a, stack_b);
	// }
	// else if ((*stack_a)->num < (*stack_a)->next->next->next->num)
	// {
	// 	printf("I.First Letter back Smaller than Last\n");
	// 	if ((*stack_a)->num > (*stack_a)->next->num)
	// 	{
	// 		printf("I.First Letter back Bigger than Second\n");
	// 		ft_sw(stack_a, stack_b);
	// 		if ((*stack_a)->next->num > (*stack_a)->next->next->num)
	// 		{
	// 			printf("I.First letter (now second) Bigger than Third\n");
	// 			ft_pab(stack_b, stack_a);
	// 			ft_sw(stack_a, stack_b);
	// 			ft_pab(stack_a, stack_b);
	// 		}
	// 	}
	// }


	// if ((*stack_a)->num > (*stack_a)->next->next->next->next->num)
	// {
	// 	printf("II.Second Letter back Bigger than Last\n");
	// 	ft_rab(stack_a, stack_b);
	// }
	// else if ((*stack_a)->num < (*stack_a)->next->next->next->next->num)
	// {
	// 	printf("II.Second Letter back Smaller than Last\n");
	// 	if ((*stack_a)->num > (*stack_a)->next->num)
	// 	{
	// 		printf("II.Second Letter back Bigger than Second\n");
	// 		ft_sw(stack_a, stack_b);
	// 		if ((*stack_a)->next->num > (*stack_a)->next->next->num)
	// 		{
	// 			printf("II.Second letter (now second) Bigger than Third\n");
	// 			ft_pab(stack_b, stack_a);
	// 			ft_sw(stack_a, stack_b);
	// 			ft_pab(stack_a, stack_b);
	// 			if ((*stack_a)->next->next->num > (*stack_a)->next->next->next->num)
	// 			{
	// 				printf("II.Second letter back (now third) Bigger than Third\n");
	// 				ft_rrab(stack_a, stack_b);
	// 				ft_sw(stack_a, stack_b);
	// 				ft_rab(stack_a, stack_b);
	// 				ft_rab(stack_a, stack_b);
	// 			}
	// 		}
	// 	}
	// }