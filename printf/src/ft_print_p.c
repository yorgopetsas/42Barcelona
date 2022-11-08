/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yorgopetsas@student.42.fr>    	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:59:27 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/09/15 12:31:41 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/ft_printf.h"

int	ft_print_p(unsigned long long num)
{
	int		ret;

	ret = 0;
	ret += ft_putstr_fd("0x", 1);
	if (ret < 0)
		return (-1);
	if (num == 0)
	{
		ret += ft_putstr_fd ("0", 1);
		if (ret < 0)
			return (1);
		return (ret);
	}
	ret += ft_hex(num, 'a');
	if (ret < 0)
		return (-1);
	return (ret);
}
