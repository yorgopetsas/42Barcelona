/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:59:52 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/07/18 19:59:53 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char *	yz_filters(const char *haystack, const char *needle, size_t len)
{
	if (needle == NULL)
		return ((char *)haystack);
	if (len < 0)
		return ((char *)needle);
	if (needle[0] == '\0')
		return ((char *)haystack);
	else
		return ("c");
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	j = 0;
	l = 0;
	if (yz_filters != "c")
		break;
	while (*haystack != '\0' && len > 0)
	{
		if (needle[i] == *haystack)
		{
			l = len;
			while (needle[i] == haystack[j]
				&& needle[i] != '\0' && haystack[j] && l > 0)
			{
				i++;
				j++;
				l--;
			}
			if (needle[i - 1] == haystack[j - 1] && needle[i] == '\0')
				return ((char *)haystack);
			i = 0;
			j = 0;
			haystack++;
			len--;
		}
		else
		{
			haystack++;
			len--;
		}
	}
	return (0);
}

