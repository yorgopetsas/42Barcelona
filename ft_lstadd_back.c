/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@42barelona.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:12:47 by ncolomer          #+#    #+#             */
/*   Updated: 2019/10/10 00:34:59 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*pu;

	if (lst == NULL)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	pu = ft_lstlast(*lst);
	pu->next = new;
}
