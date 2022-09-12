/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:15:20 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/07/18 19:15:25 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	i = ft_strlen(s);
	if (!s)
		return (NULL);
	if ((char)c == '\0')
	{
		return ((char *)(s + i));
	}
	while (*s != '\0')
	{
		if ((char)c == *s)
		{
			return ((char *)s);
		}
		s++;
	}
	return (NULL);
}
