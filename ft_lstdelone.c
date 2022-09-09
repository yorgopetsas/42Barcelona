/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@42barelona.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:12:47 by ncolomer          #+#    #+#             */
/*   Updated: 2019/10/10 00:34:59 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	(del)(lst->content);
	free(lst);
}

// 	if (!lst || !del)
// 		return ;
// 	(del)(lst->content);
// 	free(lst);
// }
