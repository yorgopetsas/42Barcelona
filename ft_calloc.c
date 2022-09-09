/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 17:47:50 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/07/26 17:47:52 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pnt;
	size_t	meml;

	meml = nmemb * size;
	pnt = malloc(meml);
	if (!pnt)
		return (0);
	ft_memset(pnt, 0, meml);
	return (pnt);
}
