/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:28:17 by yzisis-p          #+#    #+#             */
/*   Updated: 2023/03/08 16:56:32 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_strncmp(char *s1, char *s2)
{
	int	cont;

	cont = 0;
	while (s1[cont] != '\0' || s2[cont] != '\0')
	{
		if (s1[cont] != s2[cont])
			return (1);
		cont++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	if (!str)
		return (0);
	while (str[cont])
		cont++;
	return (cont);
}

int	struct_lent(t_stack **stack)
{
	t_stack		*tmp;
	int	i;

	i = 1;
	tmp = *stack;
	while ((*stack)->next != NULL)
	{
		(*stack) = (*stack)->next;
		i++;
	}
	(*stack) = tmp;
	return (i);
}

int	is_biggiest(t_stack **stack)
{
	t_stack		*tmp2;

	tmp2 = (*stack);
	printf("1st.(*tmp2).num and is %d And (*stack)->next is: %i \n", (*tmp2).num, (*stack)->next->num);
	while ((*stack)->next != NULL)
	{
		if ((*tmp2).num > (*stack)->next->num)
		{
			(*stack) = (*stack)->next;
			if (!(*stack)->next)
			{
				printf("is_biggiest\n");
				(*stack) = tmp2;
				return (1);
			}
			printf("2nd.(*tmp2).num and is %d And (*stack)->next is: %i \n", (*tmp2).num, (*stack)->next->num);
		}
		else if ((*tmp2).num < (*stack)->next->num)
		{
			printf("(*tmp2).num and is %d \n", (*tmp2).num);
			(*stack) = tmp2;
			return (0);
		}
	}
	(*stack) = tmp2;
	return (0);
}

int	is_ordered(t_stack **stack)
{
	return(0);
}
