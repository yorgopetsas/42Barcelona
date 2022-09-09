/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:34:50 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/07/18 19:34:53 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	if ((char)c == '\0')
	{
		return ((char *)(str + i));
	}
	while (i > 0)
	{
		if ((char)c == str[i - 1])
		{
			return ((char *)(str + i - 1));
		}
		i--;
	}
	return (NULL);
}
