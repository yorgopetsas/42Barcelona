/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:28:17 by yzisis-p          #+#    #+#             */
/*   Updated: 2023/03/09 19:02:57 by yorgopetsas      ###   ########.fr       */
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
	int			i;

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
	t_stack		*tmp;

	tmp = (*stack);
	while ((*stack)->next != NULL)
	{
		if ((*tmp).num > (*stack)->next->num)
		{
			(*stack) = (*stack)->next;
			if (!(*stack)->next)
			{
				(*stack) = tmp;
				return (1);
			}
		}
		else if ((*tmp).num < (*stack)->next->num)
		{
			(*stack) = tmp;
			return (0);
		}
	}
	(*stack) = tmp;
	return (0);
}

int	is_ordered(t_stack **stack)
{
	int			x;
	int			stk_len;
	t_stack		*tmp;

	stk_len = struct_lent(stack);
	tmp = (*stack);
	while (x < stk_len - 1)
	{
		if ((*tmp).num > (*tmp).next->num)
		{
			return (0);
		}
		else if ((*tmp).num < (*tmp).next->num)
		{
			tmp = (*tmp).next;
			x++;
		}
	}
	return (1);
}
