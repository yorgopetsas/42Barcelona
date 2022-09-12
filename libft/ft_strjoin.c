/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:37:28 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/07/26 19:37:30 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ns;
	int		c;
	int		s1l;
	int		s2l;

	c = 0;
	s1l = ft_strlen(s1);
	s2l = ft_strlen(s2);
	ns = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!ns)
		return (NULL);
	while (s1 && c <= s1l)
	{
		ns[c] = s1[c];
		c++;
	}
	c = 0;
	while (s2 && c <= s2l)
	{
		ns[s1l + c] = s2[c];
		c++;
	}
	ns[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (ns);
}
