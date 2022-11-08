/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:59:27 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/11/03 21:29:27 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/ft_printf.h"

int	ft_filter(va_list args, const char keyword)
{
	int	result;

	result = 0;
	if (keyword == 'c')
		result += ft_putchar_fd(va_arg(args, int), 1);
	else if (keyword == 's')
		result += ft_putstr_fd(va_arg(args, char *), 1);
	else if (keyword == 'p')
		result += ft_print_p(va_arg(args, unsigned long long));
	else if (keyword == 'i' || keyword == 'd')
		result += ft_putnbr_fd(va_arg(args, int), 1);
	else if (keyword == 'u')
		result += ft_unint(va_arg(args, unsigned int));
	else if (keyword == 'x')
		result += ft_printx(va_arg(args, unsigned long long), 'x');
	else if (keyword == 'X')
		result += ft_printx(va_arg(args, unsigned long long), 'X');
	else if (keyword == '%')
		result += ft_putchar_fd('%', 1);
	return (result);
}
