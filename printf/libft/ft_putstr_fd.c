/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 23:18:28 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/08/01 23:18:29 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	size_t	i;
	int		ret;

	i = 0;
	ret = 0;
	if (!s)
	{
		i += ft_putstr_fd("(null)", 1);
		return ((int) i);
	}
	while (s[i])
	{
		ret += ft_putchar_fd(s[i], fd);
		if (ret < 0)
			return (-1);
		i++;
	}
	return ((int)i);
}

// int	ft_putstr_fd(char *s, int fd)
// {
// 	int	i;
// 
// 	i = 0;
// 	if (!s)
// 		return (0);
// 	while (s[i] != '\0')
// 	{
// 		write(fd, &s[i], 1);
// 		return (1);
// 		i++;
// 	}
// }
