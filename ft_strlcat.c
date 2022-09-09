/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:11:47 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/07/19 17:11:49 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t
	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dlen;
	size_t	slen;

	i = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	j = dlen;
	if (size == 0)
		return (slen);
	while (src[i] && dlen + i < size - 1)
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = 0;
	if (dlen >= size)
		dlen = size;
	return (dlen + slen);
}
