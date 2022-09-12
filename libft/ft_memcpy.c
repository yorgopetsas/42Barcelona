/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 01:17:12 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/05/14 01:17:14 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	int					i;
	const unsigned char	*a;
	unsigned char		*b;

	i = 0;
	a = (unsigned char *)src;
	b = (unsigned char *)dest;
	if (a == 0 && b == 0)
	{
		return (dest);
	}
	while (count > 0)
	{
		b[i] = a[i];
		i++;
		count--;
	}
	return (dest);
}
