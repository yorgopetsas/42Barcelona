/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:28:17 by yzisis-p          #+#    #+#             */
/*   Updated: 2023/03/07 20:34:34 by yzisis-p         ###   ########.fr       */
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
