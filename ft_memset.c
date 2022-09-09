/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 23:44:40 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/05/13 23:44:42 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t count)
{
	unsigned char	*k;

	k = (unsigned char *) dest;
	while (count > 0)
	{
		k[count - 1] = ch;
		count--;
	}
	return (dest);
}
