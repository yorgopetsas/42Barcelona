/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:59:27 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/11/03 21:29:27 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/ft_printf.h"

int	ft_positive(unsigned int n)
{
	int	result;

	result = 0;
	if (n >= 10)
	{
		result += ft_putnbr_fd(n / 10, 1);
		if (result < 0)
			return (-1);
		n = n % 10;
	}
	if (n < 10)
	{
		result += ft_putchar_fd(n + 48, 1);
		if (result < 0)
			return (-1);
	}
	return (result);
}

int	ft_unint(unsigned int n)
{
	int				result;
	unsigned int	un;

	result = 0;
	un = 4294967295;
	if (n < 0)
	{
		un = n - un;
		result += ft_unint(un);
	}
	if (n >= 0)
		result += ft_positive(n);
	return (result);
}
