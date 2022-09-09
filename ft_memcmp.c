/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:52:12 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/07/18 19:52:13 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ch;
	const unsigned char	*sh;
	size_t				i;

	sh = (const unsigned char *)s1;
	ch = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (sh[i] != ch[i])
			return (sh[i] - ch[i]);
		i++;
	}
	return (0);
}
