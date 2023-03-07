/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper-funcionts.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 11:34:56 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/03/07 19:24:48 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_free_stack(t_stack **stack)
{
	t_stack	*tmp;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	stack = NULL;
}

int	ft_atoi(const char *nptr)
{
	int	num;
	int	symb;

	num = 0;
	symb = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-')
	{
		symb = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;
	while (*nptr >= 48 && *nptr <= 57)
	{
		num *= 10;
		num = num + (*nptr - 48);
		nptr++;
	}
	return (num * symb);
}

// function to see the stack, just a checker for the programer
void	show_stack(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	t_stack	*tmp2;
	tmp = *stack_a;
	tmp2 = *stack_b;
	printf("\n------------------------------\n");
	printf("\nSTACK A\t\t\t\tSTACK B");
	while (tmp || tmp2)
	{
		if (tmp)
		{
			printf("\n %d - %zu", tmp->num, tmp->index);
			tmp = tmp->next;
		}
		else
			printf("\n -");
		if (tmp2)
		{
			printf("\t\t\t\t%d - %zu", tmp2->num, tmp2->index);
			tmp2 = tmp2->next;
		}
		else
			printf("\t\t\t\t-");
	}
	printf("\n\n------------------------------\n");
	// ft_free_stack(&tmp);
	// ft_free_stack(&tmp2);
}

	// printf("2 arguments case\n");
	// printf("stack->num: %d, \n", (*stack)->num);
	// printf("stack->next->num: %d, \n", (*stack)->next->num);



	// if ((*stack)->num < (*stack)->next->num && (*stack)->next->num < (*stack)->next->next->num)
	// {
	// 	printf("All Good!\n");
	// 	show_stack(stack, stack);
	// 	exit(0);
	// }


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
//
// void	step_one(t_stack **stack_a, t_stack **stack_b)
// {
// 	printf("Step One\n");
// 	ft_pab(stack_b, stack_a);
// 	ft_pab(stack_b, stack_a);
// 	case_three(stack_a, stack_b);
// 	ft_pab(stack_a, stack_b);
// }

// void	step_two(t_stack **stack_a, t_stack **stack_b)
// {
// 	printf("Step Two\n");
// 	if ((*stack_a)->num > (*stack_a)->next->next->next->num)
// 		ft_rab(stack_a, stack_b);
// 	if ((*stack_a)->num > (*stack_a)->next->num)
// 		ft_sw(stack_a, stack_b);
// 	if ((*stack_a)->next->num > (*stack_a)->next->next->num)
// 	{
// 		ft_pab(stack_b, stack_a);
// 		ft_sw(stack_a, stack_b);
// 		ft_pab(stack_a, stack_b);
// 	}
// }