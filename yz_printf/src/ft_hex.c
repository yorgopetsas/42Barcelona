/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yorgopetsas@student.42.fr>    	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:59:27 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/09/15 12:31:41 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/ft_printf.h"

int	ft_len(unsigned long long num)
{
	int	ret;

	ret = 0;
	while (num != 0)
	{
		num /= 16;
		ret++;
	}
	return (ret);
}

int	ft_hex(unsigned long long num, char key)
{
	int	ret;

	ret = 0;
	if (num >= 16)
	{
		ft_hex(num / 16, key);
		ft_hex(num % 16, key);
	}
	else
	{
		if (num <= 9)
		{
			ft_putchar_fd(num + '0', 1);
			if (ret < 0)
				return (-1);
		}
		else
		{
			ft_putchar_fd(((int)(num - 10 + key)), 1);
			if (ret < 0)
				return (-1);
		}
	}
	ret = ft_len(num);
	return (ret);
}
