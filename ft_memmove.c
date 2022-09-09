/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 02:23:14 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/05/14 02:23:17 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	int					i;
	const unsigned char	*a;
	unsigned char		*b;

	i = 0;
	a = (unsigned char *)src;
	b = (unsigned char *)dest;
	if (!a && !b)
		return (0);
	if (a > b)
	{
		ft_memcpy(dest, src, count);
	}
	else
	{
		while (count > 0)
		{
			b[count - 1] = a[count - 1];
			count--;
		}
	}
	return (dest);
}
