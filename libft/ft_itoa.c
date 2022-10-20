/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:35:43 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/08/01 22:35:45 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*yz_itoa(char *c, unsigned int num, long int cnt)
{
	while (num > 0)
	{
		c[cnt--] = 48 + (num % 10);
		num = num / 10;
	}
	return (c);
}

static long int	yz_len(int n)
{
	int	intlen;

	intlen = 0;
	if (n <= 0)
		intlen = 1;
	while (n != 0)
	{
		n = n / 10;
		intlen++;
	}
	return (intlen);
}

char	*ft_itoa(int n)
{
	char			*c;
	long int		cnt;
	unsigned int	num;
	int				isneg;

	isneg = 1;
	cnt = yz_len(n);
	c = (char *)malloc(sizeof(char) * (cnt + 1));
	if (!c)
		return (NULL);
	c[cnt--] = '\0';
	if (n == 0)
		c[0] = '0';
	if (n < 0)
	{
		isneg *= -1;
		num = n * -1;
		c[0] = '-';
	}
	else
		num = n;
	c = yz_itoa(c, num, cnt);
	return (c);
}
