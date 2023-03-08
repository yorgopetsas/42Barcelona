/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:28:17 by yzisis-p          #+#    #+#             */
/*   Updated: 2023/03/08 14:01:33 by yorgopetsas      ###   ########.fr       */
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
	int			i;
	// t_stack		**tmp;
	t_stack		*tmp2;

	i = 1;
	// tmp = stack;
	tmp2 = *stack;
	while ((*stack)->next != NULL)
	{
		(*stack) = (*stack)->next;
		i++;
	}
	(*stack) = tmp2;
	return (i);
}
