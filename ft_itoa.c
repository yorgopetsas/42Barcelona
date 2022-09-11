/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 22:35:43 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/08/01 22:35:44 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	yz_numlen(int n)
{
	int	intlen;

	intlen = 0;
	if (n < 0)
		n = n * -1;
	while (n > 0)
	{
		n = n / 10;
		intlen++;
	}
	return (intlen);
}

int	yz_isneg(int n)
{
	int	isneg;

	isneg = 1;
	if (n < 0)
		isneg = -1;
	if (n == 0 )
		isneg = 0;
	return (isneg);
}

static char	*ft_strrev(char *str, int n)
{
	int i;
	int j;
	int tmp;

	i = 0;
	j = yz_numlen(n);
	while (j > i)
	{
		j--;
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
	}
	return str;
}

char	yz_iszero(int isneg)
{
	if (isneg == 0)
	{
		return ('0');
	}
	return ('0');
}

char	*ft_itoa(int n)
{
	char		*c;
	int			i;
	int			cnt;
	int			isneg;
	long int	num;

	i = 0;
	num = n;
	cnt = yz_numlen(n);
	isneg = yz_isneg(n);
	c = (char *)malloc(sizeof(char *) * (cnt + 1));
	if (!c)
		return (NULL);
	if (isneg == 0)
	{
		c[i] = '0';
		i++;
	}
	while (i < cnt && num != 0)
	{
		
		if (isneg < 0)
		{
			c[0] = '-';
			i++;
		}
		if (num < 10 && num > -10)
		{
// 			if (isneg < 0)
// 			{
// 				num = num * -1;
// 				c[0] = '-';
// 				i++;
// 			}
// 			c[i] = num % 10 + 48;
			c[i] = num + '0';
			i++;
		}
		else
		{
// 			if (isneg < 0)
// 			{
// 				num = num * -1;
// 				c[0] = '-';
// 				i++;
// 			}
			c[i++] = num % 10 + 48;
			num /= 10;
		}
	}
	if (n > 0)
		c = ft_strrev(c, n);
	c[i] = '\0';
	return (c);
}
