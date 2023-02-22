/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_hun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:24:26 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/23 00:14:49 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int G = 0;

void	sort_twenty(t_stack **stack_a, t_stack **stack_b, int ul, int loops)
{
	t_stack	*tmp;
	t_stack	*tmp2;
	int		i;
	int		t;
	int		*stps2;
	int		ps;
 
	tmp2 = stack_mem(tmp2);
	i = 0;
	t = 1;
	stps2 = 0;
	ps = 0;
	while (ps < 5)
	{
		tmp = *stack_a;
		// printf("(*stack_a)->num is: %d\n", (*stack_a)->num);
		if ((*stack_a)->num > ul)
		{
			ft_rab(stack_a, stack_b);
			G++;
			// (*stps)++;
			// (*stack_a) = (*stack_a)->next;
			// printf("Next Number is: %d\n", (*stack_a)->num);
			// // add_at_end(stack_a, tmp);
			// tmp->next = NULL;
			// y++;
		}
		else if ((*stack_a)->num <= ul)
		{
			printf("Number Found: %d\n", (*stack_a)->num);
			ft_pab(&tmp2, stack_a);
			G++;
			ps++;
			// (*stps)++;
			// show_stack(&tmp2, stack_b);
			// while (y > 1)
			// {
			// 	ft_pab(stack_b, stack_a);
			// 	// ft_rab(stack_a, stack_b);
			// 	y--;
			// }
			// y = 1;
		}
		t++;
		stps2 = &G;
		printf("&G   = %d\n", *stps2);
	}
	ft_rrab(&tmp2, stack_a);
	ft_pab(stack_b, &tmp2);
	case_five(&tmp2, stack_a);
	ft_pab(stack_b, &tmp2);
	ft_pab(stack_b, &tmp2);
	ft_pab(stack_b, &tmp2);
	ft_pab(stack_b, &tmp2);
	ft_pab(stack_b, &tmp2);
}

void	back_to_a(t_stack **stack_a, t_stack **stack_b)
{
	int	i;

	i = 113;
	case_five(stack_a, stack_b);
	while (i > 0)
	{
		if ((*stack_b)->num != 0)
			ft_pab(stack_a, stack_b);
		else
			ft_rab(stack_b, stack_a);
		i--;
	}
}

// void	case_hun_two(t_stack **stack_a, t_stack **stack_b)
// {
// 	int		ul;

// 	ul = 0;
// 	case_two(stack_a, stack_b);
// }

void	case_hun(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp2;
	int		ul;
	int		x;
	int		loops;

	tmp2 = *stack_b;
	ul = 0;
	x = 0;
	loops = 96;
	printf("100 arguments case\n");
	while (x < 19)
	{
		ul = ul + 5;
		sort_twenty(stack_a, stack_b, ul, loops);
		loops -= 6;
		x++;
	}
	back_to_a(stack_a, stack_b);
	show_stack(stack_a, stack_b);
	// case_hun_two(stack_a, stack_b);
}
