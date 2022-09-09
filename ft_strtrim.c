/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 19:41:49 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/08/01 19:41:51 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	yz_findc(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	i;
	size_t	s;
	size_t	f;

	i = 0;
	s = 0;
	while (s1[s] && yz_findc(s1[s], set))
		s++;
	f = strlen(s1);
	while (f > s && yz_findc(s1[f - 1], set))
		f--;
	s2 = (char *)malloc(sizeof(*s1) * (f - s + 1));
	if (!s2)
		return (NULL);
	while (s < f)
		s2[i++] = s1[s++];
	s2[i] = 0;
	return (s2);
}
