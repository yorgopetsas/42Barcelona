/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yorgopetsas@student.42.fr>    	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:59:27 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/11/07 12:31:41 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../inc/ft_printf.h"

int	ft_printf(const char *str, ...)
{	
	size_t		i;
	int			result;
	va_list		args;

	i = 0;
	result = 0;
	va_start(args, str);
	while (i < ft_strlen(str))
	{
		if (str[i] == '%')
		{
			result += ft_filter(args, str[++i]);
			if (result < 0)
				return (-1);
		}
		else
		{
			result += ft_putchar_fd(str[i], 1);
			if (result < 0)
				return (-1);
		}
		i++;
	}
	va_end(args);
	return (result);
}

// int	main(void)
// {
// 	const char	*str;
// 	
// 	str = "abc123 %c %d";
// 	yz_printf(str, 1);
// }