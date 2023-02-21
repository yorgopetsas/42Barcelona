/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_hun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:24:26 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/21 22:22:43 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	sort_twenty(t_stack **stack_a, t_stack **stack_b, int ul)
{
	// ASK IF YOU NEED TO DO MALLOC FOR THE TMP STRUCT
	t_stack	*tmp;
	int		i;
	int		t;

	i = 0;
	t = 30;
	while (t < 200)
	{
		tmp = *stack_a;
		if ((*stack_a)->num <= ul)
		{
			tmp = *stack_a;
			if ((*stack_a)->num <= ul)
			{
				ft_pab(stack_b, stack_a);
				tmp = *stack_a;
			}
		}
		*stack_a = (*stack_a)->next;
		add_at_end(stack_a, tmp);
		tmp->next = NULL;
		i++;
		t++;
	}
	// ft_free_stack(&tmp);
}

void	case_hun_two(t_stack **stack_a, t_stack **stack_b)
{
	int		ul;

	ul = 0;
	case_two(stack_a, stack_b);

	show_stack(stack_a, stack_b);
}

void	case_hun(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp2;
	int		ul;
	int		x;

	tmp2 = *stack_b;
	ul = 0;
	x = 0;
	printf("100 arguments case\n");	
	while (x < 4)
	{
		ul = ul + 20;
		sort_twenty(stack_a, stack_b, ul);
		x++;
	}
	ul = ul + 18;
	sort_twenty(stack_a, stack_b, ul);
	// show_stack(stack_a, stack_b);
	case_hun_two(stack_a, stack_b);
	// ft_free_stack(&tmp2);
}


	// while (t < 200)
	// {
	// 	tmp = *stack_a;
	// 	if ((*stack_a)->num > 20 && (*stack_a)->num <= 40)
	// 	{
	// 		tmp = *stack_a;
	// 		if ((*stack_a)->num > 20 && (*stack_a)->num <= 40)
	// 		{
	// 			ft_pab(stack_b, stack_a);
	// 			tmp = *stack_a;
	// 			// show_stack(stack_a, stack_b);
	// 		}
	// 	}
	// 	*stack_a = (*stack_a)->next;
	// 	add_at_end(stack_a, tmp);
	// 	tmp->next = NULL;
	// 	i++;
	// 	t++;
	// }


	// printf("Next Num is: %d. Position is %d\n", tmp->num, i);
	// if (tmp->num < 20)
	// 	printf("I.Number is < 20: %d\n", tmp->num);
	// else if (tmp->num >= 20 && tmp->num < 40)
	// 	printf("II.Number is > 20 & < 40: %d\n", tmp->num);
	// else if (tmp->num >= 40 && tmp->num < 60)
	// 	printf("III.Number is > 40 & < 60: %d\n", tmp->num);
	// else if (tmp->num >= 60 && tmp->num < 80)
	// 	printf("IV.Number is > 60 & < 80: %d\n", tmp->num);
	// else if (tmp->num >= 80 && tmp->num < 100)
	// 	printf("V.Number is > 80 & < 100: %d\n", tmp->num);

// --- 
// void	push_up(t_stack **stack_a, t_stack **stack_b, int tmpi, int p, t_stack *tmp, int i)
// {
// 	printf("Push Up\n");
// 	if ((*stack_a)->num < 20)
// 	{
// 		tmp = *stack_a;
// 		// i = 1;
// 		tmpi = i;
// 		while ((tmp)->num < 20 && tmpi > 1)
// 		{
// 			ft_pab(stack_b, stack_a);
// 			tmp = *stack_a;
// 			tmpi--;
// 			p = 1;
// 		}
// 		if ((tmp)->num < 20 && tmpi == 1)
// 		{
// 			ft_rab(stack_a, stack_b);
// 			tmp = *stack_a;
// 			p = 1;
// 		}			
// 	}
// }

// void	push_down(t_stack **stack_a, t_stack **stack_b, int tmpi, int p, t_stack *tmp, int i)
// {
// 	printf("Push Down\n");
// 	if ((*stack_a)->num < 20)
// 	{
// 		tmp = *stack_a;
// 		// i = 1;
// 		tmpi = i;
// 		while ((tmp)->num < 20 && tmpi > 1)
// 		{
// 			ft_pab(stack_b, stack_a);
// 			tmp = *stack_a;
// 			tmpi--;
// 			p = 1;
// 		}
// 		if ((tmp)->num < 20 && tmpi == 1)
// 		{
// 			ft_rab(stack_a, stack_b);
// 			tmp = *stack_a;
// 			p = 1;
// 		}			
// 	}
// }

// void	case_hun(t_stack **stack_a, t_stack **stack_b)
// {
// 	t_stack	*tmp;
// 	int		i;
// 	int		tmpi;
// 	int		p;

// 	i = 1;
// 	p = 1;
// 	printf("100 arguments case\n");
// 	while ((*stack_a)->next && (*stack_a)->num != 66)
// 	{
// 		tmp = *stack_a;
// 		if ((*stack_a)->num < 20 && i < 50)
// 			push_up(stack_a, stack_b, tmpi, p, tmp, i);
// 		else if ((*stack_a)->num < 20 && i >= 50)
// 			push_down(stack_a, stack_b, tmpi, p, tmp, i);
// 		*stack_a = (*stack_a)->next;
// 		add_at_end(stack_a, tmp);
// 		tmp->next = NULL;
// 		i++;
// 		p++;
// 	}
// 	show_stack(stack_a, stack_b);
// }
// --
// void	case_hun(t_stack **stack_a, t_stack **stack_b)
// {
// 	t_stack	*tmp;
// 	int		i;
// 	int		tmpi;

// 	i = 1;
// 	printf("100 arguments case\n");
// 	while ((*stack_a)->next && (*stack_a)->num != 66)
// 	{
// 		tmp = *stack_a;
// 		if ((*stack_a)->num < 20)
// 		{
// 			// printf("1st if (*stack_a)->num is: %d.\n", (*stack_a)->num);
// 			tmp = *stack_a;
// 			// printf("1st if (tmp)->num is: %d.\n", (*tmp).num);
// 			// i = 1;
// 			tmpi = i;
// 			while ((tmp)->num < 20 && tmpi > 1)
// 			{
// 				// ft_rab(stack_a, stack_b);
// 				ft_pab(stack_b, stack_a);
// 				tmp = *stack_a;
// 				tmpi--;
// 				// printf("While (*stack_a)->num is: %d.\n", (*stack_a)->num);
// 				// printf("While (tmp)->num is: %d.\n", (*tmp).num);
// 				// show_stack(stack_a, stack_b);
// 			}
// 			if ((tmp)->num < 20 && tmpi == 1)
// 			{
// 				// printf("2nd if (tmp)->num is: %d.\n", (*tmp).num);
// 				ft_rab(stack_a, stack_b);
// 				tmp = *stack_a;
// 				// printf("2nd if (*stack_a)->num is: %d.\n", (*stack_a)->num);
// 				// printf("2nd if (tmp)->num is: %d.\n", (*tmp).num);
// 				// show_stack(stack_a, stack_b);
// 			}			
// 		}
// 		*stack_a = (*stack_a)->next;
// 		add_at_end(stack_a, tmp);
// 		tmp->next = NULL;
// 		// printf("End (*stack_a)->num is: %d.\n", (*stack_a)->num);
// 		// printf("End (tmp)->num is: %d.\n", (*tmp).num);
// 		i++;
// 	}
// 	show_stack(stack_a, stack_b);
// }

// SECOND VERSION
// void	case_hun(t_stack **stack_a, t_stack **stack_b)
// {
// 	t_stack	*tmp;
// 	int		i;

// 	i = 1;
// 	printf("100 arguments case\n");
// 	while ((*stack_a)->num != 34)
// 	{
// 		tmp = *stack_a;
// 		if ((*stack_a)->num < 20)
// 		{
// 			// printf("1st if (*stack_a)->num is: %d.\n", (*stack_a)->num);
// 			tmp = *stack_a;
// 			// printf("1st if (tmp)->num is: %d.\n", (*tmp).num);
// 			// OPTIMIZATION NEEDED
// 			// if (tmpi > 1)
// 			// {
// 			// 	// printf("2nd if (tmp)->num is: %d.\n", (*tmp).num);
// 			// 	printf("Start Group RA\n");
// 			// 	while (tmpi > 1)
// 			// 	{
// 			// 		ft_rab(stack_a, stack_b);
// 			// 		tmpi--;
// 			// 	}
// 			// 	printf("End Group RA\n");
// 			// 	tmp = *stack_a;
// 			// 	// printf("2nd if (*stack_a)->num is: %d.\n", (*stack_a)->num);
// 			// 	// printf("2nd if (tmp)->num is: %d.\n", (*tmp).num);
// 			// 	// show_stack(stack_a, stack_b);
// 			// }

// 			if ((tmp)->num < 20)
// 			{
// 				// ft_rab(stack_a, stack_b);
// 				ft_pab(stack_b, stack_a);
// 				tmp = *stack_a;
// 				// tmpi--;
// 				// printf("While (*stack_a)->num is: %d.\n", (*stack_a)->num);
// 				// printf("While (tmp)->num is: %d.\n", (*tmp).num);
// 				// show_stack(stack_a, stack_b);
// 			}		
// 		}
// 		*stack_a = (*stack_a)->next;
// 		add_at_end(stack_a, tmp);
// 		tmp->next = NULL;
// 		// printf("End (*stack_a)->num is: %d.\n", (*stack_a)->num);
// 		// printf("End (tmp)->num is: %d.\n", (*tmp).num);
// 		i++;
// 	}
// 	show_stack(stack_a, stack_b);
// }

	// NEW LOGIC
	// while (i < 199)
	// {
	// 	// printf("I < 99\n");
	// 	tmp = *stack_a;
	// 	printf("(*stack_a)->num:%d\n", (*stack_a)->num);
	// 	if ((*stack_a)->num == t)
	// 	{
	// 		printf("NUMBER FOUND\n");
	// 		// printf("(*stack_a)->num == t\n");
	// 		ft_pab(stack_b, stack_a);
	// 		tmp = *stack_a;
	// 		t--;
	// 		// i = 0;
	// 		// show_stack(stack_a, stack_b);
	// 		*stack_a = (*stack_a)->next;
	// 		add_at_end(stack_a, tmp);
	// 		tmp->next = NULL;
	// 	}
	// 	i++;
	// 	// *stack_a = (*stack_a)->next;
	// 	// add_at_end(stack_a, tmp);
	// 	// tmp->next = NULL;
	// }
	// *stack_a = (*stack_a)->next;
	// add_at_end(stack_a, tmp);
	// tmp->next = NULL;
	// END NEW LOGIC
