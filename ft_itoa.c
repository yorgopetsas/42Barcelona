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

int	yz_numlen(int ns)
{
	int	intlen;

	intlen = 0;
	if (ns < 0)
		ns = ns * -1;
	while (ns > 0)
	{
		ns = ns / 10;
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
	return (isneg);
	
}

char	*ft_itoa(int n)
{
	char	*c;
	int	i;
	int	mpl;
	int	intlen;
	int	ns;

	i = 0;
	intlen = 0;
	ns = n;
	mpl = yz_isneg(n);
	intlen = yz_numlen(ns);
	c = (char *)malloc(sizeof(char *) * intlen + 1);
	if (!c)
		return (NULL);
	if (n < 0 && n > -10)
	{
		c[i] = '-';
		n = n * mpl;
		c[i + 1] = n % 10 + 48;
// 		printf("C [i] is %s\n", c);
		return (c);
	}
	if (ns < 10 && n > 0)
	{
		c[i] = ns + 48;
// 		printf("C [i] is %s\n", c);
		return (c);
	}
// 	printf("Multiplier is %d\nIntLen is %d\n", mpl, intlen);
	while (i < intlen)
	{
		if (mpl < 0 && ns > -10)
		{
			n = n * mpl;
			c[i] = '-';
			c[i + 1] = n % 10 + 48;
			i++;
			printf("C [i] is %s\n", c);
			return (c);
		}
		c[intlen - i - 1] = ns % 10 + 48;
		ns = ns / 10;
		i++;
	}
// 	printf("C [i] is %s\n", c);
	return (c);
}

// int	main(void)
// {
// 	int		n;
// 
// 	n = -44;
// 	ft_itoa(n);
// 
// 	return (0);
// }
