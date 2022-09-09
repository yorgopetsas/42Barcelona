/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:46:40 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/07/18 19:46:41 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0 || (*s1 == 0 && *s2 == 0))
		return (0);
	if (!*s1)
		return (-1);
	if (!*s2)
		return (1);
	while ((s1[i] == s2[i]) && i < n && s1[i] != '\0' && s2[i] != '\0')
		i++;
	if (s1[i - 1] == s2[i - 1] && i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char )s2[i]);
	if (s1[i] > s2[i])
		return (1);
	if (s1[i] < s2[i])
		return (-1);
}
