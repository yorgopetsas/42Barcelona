/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:27:25 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/07/28 16:27:27 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	yz_wordcount(char const *s, char c)
{
	size_t	i;
	size_t	p;

	i = 0;
	p = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			p++;
		i++;
	}
	return (p);
}

void	freeall(char **str, size_t wc)
{
	while (wc > 0)
	{
		wc--;
		free(str[wc]);
	}
	free(str);
}

char	**yz_wfill(char const *s, char **str, char c, size_t wc)
{
	size_t	i;
	size_t	j;
	size_t	p;

	i = 0;
	p = 0;
	while (wc > 0 && p < wc)
	{		
		while (s[i] == c && s[i] != '\0')
			i++;
		j = i;
		while (s[j] != c && s[j] != '\0')
			j++;
		str[p] = (char *)ft_substr(s, i, j - i);
		if (!str[p])
		{
			freeall(str, p);
			return (NULL);
		}
		p++;
		i = j;
	}
	str[wc] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	wc;
	char	**str;

	wc = yz_wordcount(s, c);
	str = (char **)malloc((wc + 1) * sizeof(char *));
	if (!str)
		return (0);
	str = yz_wfill(s, str, c, wc);
	return (str);
}
