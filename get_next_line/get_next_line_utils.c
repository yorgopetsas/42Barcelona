/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:14:58 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/11/03 19:04:44 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_substr(char *s, int start, int len)
{
	char	*newstr;
	int		i;

	i = ft_strlen(s);
	if (start > i)
		start = i;
	if (len > i - start)
		len = i - (int)start;
	newstr = (char *)malloc((len + 1) * sizeof(char));
	if (!newstr)
		return (NULL);
	ft_strlcpy(newstr, &s[start], len + 1);
	return (newstr);
}

// ALDO STRJOIN && STRLCPY
int	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (size == 0)
		return (0);
	while (src [count] != '\0' && count < (size - 1))
	{
		dest[count] = src [count];
		count++;
	}
	dest[count] = '\0';
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*newstr;
	int		i;
	int		size1;
	int		size2;

	i = 0;
	size1 = 0;
	if (s1)
		size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	newstr = (char *)malloc((1 + (size1 + size2)) * sizeof(char));
	if (!newstr)
		return (NULL);
	while (size1 > 0 && s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}
	ft_strlcpy((char *)&newstr[i], s2, size2 + 1);
	return (newstr);
}

// ALDO STRJOIN && STRLCPY END
// YORGO STRJOIN FAILS 
	// char	*ft_strjoin(char *s1, char *s2)
	// {
	// 	char	*ns;
	// 	int		c;
	// 	int		s1l;
	// 	int		s2l;
	// 
	// 	c = 0;
	// 	s1l = ft_strlen(s1);
	// 	s2l = ft_strlen(s2);
	// 	ns = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	// 	if (!ns)
	// 		return (NULL);
	// 	while (s1 && c <= s1l)
	// 	{
	// 		ns[c] = s1[c];
	// 		c++;
	// 	}
	// 	c = 0;
	// 	while (s2 && c <= s2l)
	// 	{
	// 		ns[s1l + c] = s2[c];
	// 		c++;
	// 	}
	// 	ns[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	// 	return (ns);
	// }

	// int		ft_strchr(const char *s, int c)
	// {
	// 	int	i;
	// 
	// 	i = 0;
	// 	i = ft_strlen(s);
	// 	if (!s)
	// 		return (-1);
	// 	if ((char)c == '\0')
	// 	{
	// 		return (i);
	// 	}
	// 	while (*s != '\0')
	// 	{
	// 		if ((char)c == *s)
	// 		{
	// 			return ((int)s);
	// 		}
	// 		s++;
	// 	}
	// 	return (-1);
	// }

int	ft_strchr(const char *str, int ch)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char ) ch)
			return (i);
		i++;
	}
	if (str && str[i] == (char ) ch)
		return (i);
	return (-1);
}

int	ft_strlen(const char *str)
{
	int	c;

	c = 0;
	if (!str)
		return (0);
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

