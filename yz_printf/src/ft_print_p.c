/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:59:27 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/11/03 21:29:27 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/ft_printf.h"

int	ft_print_p(unsigned long long num)
{
	int	result;

	result = 0;
	result += ft_putstr_fd("0x", 1);
	if (result < 0)
		return (-1);
	if (num == 0)
	{
		result += ft_putstr_fd("0", 1);
		if (result < 0)
			return (1);
		return (result);
	}		
	result += ft_hex(num, 'a');
	if (result < 0)
		return (-1);
	return (result);
}
