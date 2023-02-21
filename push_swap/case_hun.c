/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_hun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:24:26 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/21 17:29:26 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	case_hun(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	int		i;
	int		tmpi;

	i = 1;
	
	printf("100 arguments case\n");
	while ((*stack_a)->next && (*stack_a)->num != 66)
	{
		tmp = *stack_a;
		if ((*stack_a)->num < 20)
		{
			printf("1st if (*stack_a)->num is: %d.\n", (*stack_a)->num);
			tmp = *stack_a;
			printf("1st if (tmp)->num is: %d.\n", (*tmp).num);
			// i = 1;
			tmpi = i;
			while ((tmp)->num < 20 && tmpi > 1)
			{
				// ft_rab(stack_a, stack_b);
				ft_pab(stack_b, stack_a);
				tmp = *stack_a;
				tmpi--;
				printf("While (*stack_a)->num is: %d.\n", (*stack_a)->num);
				printf("While (tmp)->num is: %d.\n", (*tmp).num);
				// show_stack(stack_a, stack_b);
			}
			if ((tmp)->num < 20 && tmpi == 1)
			{
				printf("2nd if (tmp)->num is: %d.\n", (*tmp).num);
				ft_rab(stack_a, stack_b);
				// ft_pab(stack_b, stack_a);
				tmp = *stack_a;
				printf("2nd if (*stack_a)->num is: %d.\n", (*stack_a)->num);
				printf("2nd if (tmp)->num is: %d.\n", (*tmp).num);
				// show_stack(stack_a, stack_b);
			}
			
		}
		*stack_a = (*stack_a)->next;
		add_at_end(stack_a, tmp);
		tmp->next = NULL;
		// printf("End (*stack_a)->num is: %d.\n", (*stack_a)->num);
		printf("End (tmp)->num is: %d.\n", (*tmp).num);
		i++;
	}
	show_stack(stack_a, stack_b);
}

// void	ft_rab(t_stack **stack, t_stack **stack_b)
// {
// 	// show_stack(stack, stack);

// 	t_stack	*tmp;

// 	if (*stack && ((*stack)->next))
// 	{
// 		tmp = *stack;
// 		*stack = (*stack)->next;
// 		add_at_end(stack, tmp);
// 		tmp->next = NULL;
// 		write(1, "ra/b\n", 5);
// 	}
// 	// put_index(stack);
// 	// show_stack(stack, stack_b);
// }




	// 	// printf("Next Num is: %d. Position is %d\n", tmp->num, i);
	// 	// if (tmp->num < 20)
	// 	// 	printf("I.Number is < 20: %d\n", tmp->num);
	// 	// else if (tmp->num >= 20 && tmp->num < 40)
	// 	// 	printf("II.Number is > 20 & < 40: %d\n", tmp->num);
	// 	// else if (tmp->num >= 40 && tmp->num < 60)
	// 	// 	printf("III.Number is > 40 & < 60: %d\n", tmp->num);
	// 	// else if (tmp->num >= 60 && tmp->num < 80)
	// 	// 	printf("IV.Number is > 60 & < 80: %d\n", tmp->num);
	// 	// else if (tmp->num >= 80 && tmp->num < 100)
	// 	// 	printf("V.Number is > 80 & < 100: %d\n", tmp->num);
	// 	// *stack_a = (*stack_a)->next;
		
	// show_stack(stack_a, stack_b);




			// if (i <= 50)
			// {
			// }

			// else if (i > 50)
			// {
			// 	while (tmpi > 1)
			// 	{
			// 		ft_rrab(stack_a	, stack_b);
			// 		tmpi--;
			// 	}
			// }
