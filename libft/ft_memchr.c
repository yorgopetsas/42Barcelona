/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:21:50 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/07/18 20:21:52 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sh;
	size_t			i;

	sh = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (sh[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
