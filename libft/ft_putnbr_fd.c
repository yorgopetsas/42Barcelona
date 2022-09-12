/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 23:30:53 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/08/01 23:30:54 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	yz_dd(int d, int e, int fd)
{
	ft_putnbr_fd(d, fd);
	ft_putnbr_fd(e, fd);
}

void	yz_negdd(unsigned int us, int fd)
{
	ft_putchar_fd('-', fd);
	ft_putnbr_fd(us / 10, fd);
	ft_putnbr_fd(us % 10, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	char			c;
	int				d;
	int				e;
	unsigned int	us;

	c = n + 48;
	d = n / 10;
	e = n % 10;
	us = -n;
	if (n < 0 && n > -9)
	{
		n = -n;
		c = n + 48;
		ft_putchar_fd('-', fd);
		ft_putchar_fd(c, fd);
	}
	else if (n < -9)
		yz_negdd(us, fd);
	else if (n >= 0 && n < 10)
		ft_putchar_fd(c, fd);
	else if (n > 9)
		yz_dd(d, e, fd);
}
