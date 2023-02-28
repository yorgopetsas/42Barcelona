// NEW CHUNKS OF 3
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_hun.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 14:24:26 by yorgopetsas       #+#    #+#             */
/*   Updated: 2023/02/23 17:25:00 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

G = 0;

// void	five_pab(t_stack **stack_b, t_stack *tmp)
// {
// 	int	i;

// 	i = 0;
// 	while (i < 5)
// 	{
// 		ft_pab(stack_b, &tmp);
// 		i++;
// 		G++;
// 	}
// }

void	sort_ul(t_stack **stack_a, t_stack **stack_b, int ul)
{
	t_stack	*tmp;
	t_stack	*tmp2;
	t_stack	*cnt;
	t_stack	*otmp;
	int		*stps2;
	int		ps;
	int		pos;

	tmp = stack_mem(tmp);
	tmp2 = stack_mem(tmp2);
	cnt = stack_mem(cnt);
	otmp = stack_mem(otmp);
	stps2 = 0;
	ps = 0;
	pos = 1;

	tmp = *stack_a;
	cnt = *stack_a;

	while (ps < 3)
	{
		printf("UL is %d\n", ul);
		printf("1st while\n");
		printf("ps is %d\n", ps);
		if ((*cnt).num > ul)
		{
			while ((*cnt).num > ul)
			{
				pos++;
				printf("2nd while\n");
				printf("C %d\n", (*cnt).num);
				// printf("cnt\n", (*cnt).next);
				cnt = cnt->next;
				// printf("cnt\n", (*cnt).num);
			}
		}
		else if ((*cnt).num <= ul)
		{
			if (pos == 1 && (*cnt).num <= ul)
			{
				ft_pab(stack_b, stack_a);
				ps++;
				if ((*stack_b)->num < ul / 2)
					ft_rab(stack_a, stack_b);
					// ft_sw(stack_a, stack_b);
				cnt = *stack_a;
				// show_stack(stack_a, stack_b);
			}
			else if (pos > 1)
			{
				printf("3rd while\n");
				while (pos > 1)
				{
					printf("4th while\n");
					if (pos < 30)
						ft_rab(stack_a, stack_b);
					else
						ft_rrab(stack_a, stack_b);
					pos--;
				}
				// printf("ps2 is %d\n", ps);
				// ft_pab(stack_b, stack_a);
				// cnt = *stack_a;
				show_stack(stack_a, stack_b);
				// stps2 = &G;
				// printf("&G   = %d\n", *stps2);
			}
		}
		tmp = *stack_a;
		// stps2 = &G;
		// printf("&G   = %d\n", *stps2);
	}
	printf("ps3 is %d\n", ps);
	// case_three(stack_b, stack_a);
	// case_five(stack_b, &otmp);
	show_stack(stack_a, stack_b);
	// five_pab(stack_b, tmp2);
	// free(cnt);
	stps2 = &G;
	printf("&G   = %d\n", *stps2);
}

// ORG
void	back_to_a(t_stack **stack_a, t_stack **stack_b)
{
	int	i;
	int	*stps2;

	i = 113;
	stps2 = 0;
	case_three(stack_a, stack_b);
	while (i > 0)
	{
		if ((*stack_b)->num != 0)
		{
			ft_pab(stack_a, stack_b);
			// G++;
		}
		else
		{
			ft_rab(stack_b, stack_a);
			// G++;
		}
		stps2 = &G;
		printf("&G   = %d\n", *stps2);
		i--;
	}
}
// END ORG

// void	back_to_a(t_stack **stack_a, t_stack **stack_b)
// {
// 	int	i;
// 	int	*stps2;

// 	i = 130;
// 	stps2 = 0;
// 	case_three(stack_a, stack_b);
// 	while (i > 0)
// 	{
// 		if ((*stack_b)->num != 0)
// 		{
// 			if ((*stack_b)->num > (*stack_a)->num)
// 			{
// 				ft_pab(stack_a, stack_b);
// 				ft_sw(stack_a, stack_b);
// 			// G++;
// 			}
// 		}
// 		else
// 		{
// 			ft_rab(stack_b, stack_a);
// 			// G++;
// 		}
// 		// stps2 = &G;
// 		// printf("&G   = %d\n", *stps2);
// 		i--;
// 	}
// }

void	case_hun(t_stack **stack_a, t_stack **stack_b)
{
	// t_stack	*tmp2;
	int		ul;
	int		x;

	// tmp2 = *stack_b;
	ul = 0;
	x = 0;
	// while (x < 19)
	while (x < 33)
	{
		ul = ul + 3;
		sort_ul(stack_a, stack_b, ul);
		x++;
		// show_stack(stack_a, stack_b);
	}
	printf("END OF FIRST SORT\n");
	back_to_a(stack_a, stack_b);
	// show_stack(stack_a, stack_b);
}

// END NEW CHUNKS OF 3



// GARBAGE
		// free(cnt);
		// tmp2 = *stack_a;
		// *stack_a = (*stack_a)->next;
		// add_at_end(stack_a, tmp);
		// tmp->next = NULL;
		// show_stack(stack_a, stack_b);

		// while ((*stack_a)->num <= ul)
		// {
		// 	// printf("4th while\n");
		// 	ft_pab(stack_b, stack_a);
		// 	G++;
		// 	ps++;
		// 	stps2 = &G;
		// 	printf("&G   = %d\n", *stps2);
		// }

		// printf("(*tmp).num: %d\n", (*tmp).num);
		// printf("(*stack_a)->num: %d\n", (*stack_a)->num);
		// if current is ..
		// if ((*cnt).num < ul)
		// {
		// 	printf("0th while\n");
		// 	ft_pab(stack_b, stack_a);
		// 	cnt = *stack_a;
		// 	sort_ul(stack_a, stack_b, ul);
		// }

// END GARBAGE



// // NEW WORKING ON CHUNKS OF 5
// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   case_hun.c                                         :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2023/02/19 14:24:26 by yorgopetsas       #+#    #+#             */
// /*   Updated: 2023/02/23 03:37:41 by yorgopetsas      ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */
// #include "push_swap.h"

// G = 0;

// void	five_pab(t_stack **stack_b, t_stack *tmp)
// {
// 	int	i;

// 	i = 0;
// 	while (i < 5)
// 	{
// 		ft_pab(stack_b, &tmp);
// 		i++;
// 		G++;
// 	}
// }

// void	sort_ul(t_stack **stack_a, t_stack **stack_b, int ul)
// {
// 	t_stack	*tmp;
// 	t_stack	*tmp2;
// 	t_stack	*cnt;
// 	t_stack	*otmp;
// 	int		*stps2;
// 	int		ps;
// 	int		pos;

// 	tmp = stack_mem(tmp);
// 	tmp2 = stack_mem(tmp2);
// 	cnt = stack_mem(cnt);
// 	otmp = stack_mem(otmp);
// 	stps2 = 0;
// 	ps = 0;
// 	pos = 1;

// 	tmp = *stack_a;
// 	cnt = *stack_a;

// 	while (ps < 5)
// 	{
// 		printf("UL is %d\n", ul);
// 		printf("1st while\n");
// 		printf("ps is %d\n", ps);
// 		// printf("(*tmp).num: %d\n", (*tmp).num);
// 		// printf("(*stack_a)->num: %d\n", (*stack_a)->num);
// 		// if current is ..
// 		// if ((*cnt).num < ul)
// 		// {
// 		// 	printf("0th while\n");
// 		// 	ft_pab(stack_b, stack_a);
// 		// 	cnt = *stack_a;
// 		// 	sort_ul(stack_a, stack_b, ul);
// 		// }
// 		if ((*cnt).num > ul)
// 		{
// 			while ((*cnt).num > ul)
// 			{
// 				pos++;
// 				printf("2nd while\n");
// 				printf("C %d\n", (*cnt).num);
// 				// printf("cnt\n", (*cnt).next);
// 				cnt = cnt->next;
// 				// printf("cnt\n", (*cnt).num);
// 			}
// 		}
// 		else if ((*cnt).num <= ul)
// 		{
// 			if (pos == 1 && (*cnt).num <= ul)
// 			{
// 				ft_pab(stack_b, stack_a);
// 				cnt = *stack_a;
// 				ps++;
// 				show_stack(stack_a, stack_b);
// 			}
// 			else if (pos > 1)
// 			{
// 				printf("3rd while\n");
// 				while (pos > 1)
// 				{
// 					printf("4th while\n");
// 					if (pos < 60)
// 						ft_rab(stack_a, stack_b);
// 					else
// 						ft_rrab(stack_a, stack_b);
// 					// G++;
// 					pos--;
// 				}
// 				// printf("ps2 is %d\n", ps);
// 				// ft_pab(stack_b, stack_a);
// 				// cnt = *stack_a;
// 				show_stack(stack_a, stack_b);
// 				stps2 = &G;
// 				printf("&G   = %d\n", *stps2);
// 			} 
// 		}

// 		tmp = *stack_a;
// 		// free(cnt);
// 		// tmp2 = *stack_a;
// 		// *stack_a = (*stack_a)->next;
// 		// add_at_end(stack_a, tmp);
// 		// tmp->next = NULL;
// 		// show_stack(stack_a, stack_b);

// 		// while ((*stack_a)->num <= ul)
// 		// {
// 		// 	// printf("4th while\n");
// 		// 	ft_pab(stack_b, stack_a);
// 		// 	G++;
// 		// 	ps++;
// 		// 	stps2 = &G;
// 		// 	printf("&G   = %d\n", *stps2);
// 		// }

// 		stps2 = &G;
// 		printf("&G   = %d\n", *stps2);
// 	}
// 	printf("ps3 is %d\n", ps);
// 	// show_stack(stack_a, stack_b);
// 	// ft_rrab(stack_b, stack_a);
// 	// ft_pab(stack_b, stack_b);
// 	// case_five(stack_b, &otmp);
// 	show_stack(stack_a, stack_b);
// 	// five_pab(stack_b, tmp2);
// 	// free(tmp);
// 	stps2 = &G;
// 	printf("&G   = %d\n", *stps2);
// }

// void	back_to_a(t_stack **stack_a, t_stack **stack_b)
// {
// 	int	i;
// 	int	*stps2;

// 	i = 113;
// 	stps2 = 0;
// 	case_five(stack_a, stack_b);
// 	while (i > 0)
// 	{
// 		if ((*stack_b)->num != 0)
// 		{
// 			ft_pab(stack_a, stack_b);
// 			// G++;
// 		}
// 		else
// 		{
// 			ft_rab(stack_b, stack_a);
// 			// G++;
// 		}
// 		stps2 = &G;
// 		printf("&G   = %d\n", *stps2);
// 		i--;
// 	}
// }

// void	case_hun(t_stack **stack_a, t_stack **stack_b)
// {
// 	// t_stack	*tmp2;
// 	int		ul;
// 	int		x;

// 	// tmp2 = *stack_b;
// 	ul = 0;
// 	x = 0;
// 	// while (x < 19)
// 	while (x < 19)
// 	{
// 		ul = ul + 5;
// 		sort_ul(stack_a, stack_b, ul);
// 		x++;
// 		// show_stack(stack_a, stack_b);
// 	}
// 	back_to_a(stack_a, stack_b);
// 	show_stack(stack_a, stack_b);
// }

// // END NEW WORKING ON CHUNKS OF 5

// WORKING
// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   case_hun.c                                         :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2023/02/19 14:24:26 by yorgopetsas       #+#    #+#             */
// /*   Updated: 2023/02/23 03:04:22 by yorgopetsas      ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */
// #include "push_swap.h"

// G = 0;

// void	five_pab(t_stack **stack_b, t_stack *tmp)
// {
// 	int	i;

// 	i = 0;
// 	while (i < 5)
// 	{
// 		ft_pab(stack_b, &tmp);
// 		i++;
// 		G++;
// 	}
// }

// void	sort_ul(t_stack **stack_a, t_stack **stack_b, int ul)
// {
// 	t_stack	*tmp2;
// 	int		ps;

// 	tmp2 = stack_mem(tmp2);
// 	ps = 0;
// 	while (ps < 5)
// 	{
// 		if ((*stack_a)->num > ul)
// 		{
// 			ft_rab(stack_a, stack_b);
// 			G++;
// 		}
// 		else if ((*stack_a)->num <= ul)
// 		{
// 			ft_pab(&tmp2, stack_a);
// 			G++;
// 			ps++;
// 		}
// 	}
// 	ft_rrab(&tmp2, stack_a);
// 	ft_pab(stack_b, &tmp2);
// 	case_five(&tmp2, stack_a);
// 	five_pab(stack_b, tmp2);
// }

// void	back_to_a(t_stack **stack_a, t_stack **stack_b)
// {
// 	int	i;

// 	i = 113;
// 	case_five(stack_a, stack_b);
// 	while (i > 0)
// 	{
// 		if ((*stack_b)->num != 0)
// 		{
// 			ft_pab(stack_a, stack_b);
// 			G++;
// 		}
// 		else
// 		{
// 			ft_rab(stack_b, stack_a);
// 			G++;
// 		}
// 		i--;
// 	}
// }

// // void	case_hun_two(t_stack **stack_a, t_stack **stack_b)
// // {
// // 	int		ul;

// // 	ul = 0;
// // 	case_two(stack_a, stack_b);
// // }

// void	case_hun(t_stack **stack_a, t_stack **stack_b)
// {
// 	t_stack	*tmp2;
// 	int		ul;
// 	int		x;
// 	int		*stps2;

// 	tmp2 = *stack_b;
// 	ul = 0;
// 	x = 0;
// 	stps2 = 0;
// 	while (x < 19)
// 	{
// 		ul = ul + 5;
// 		sort_ul(stack_a, stack_b, ul);
// 		x++;
// 	}
// 	back_to_a(stack_a, stack_b);
// 	show_stack(stack_a, stack_b);
// 	stps2 = &G;
// 	printf("&G   = %d\n", *stps2);
// 	// case_hun_two(stack_a, stack_b);
// }

// END WORKING
