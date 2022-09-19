/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yorgopetsas@student.42.fr>    	+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:59:27 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/09/15 12:31:41 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	size_t	i;
	int		ret;
	va_list	args;

	i = 0;
	ret = 0;
	va_start(args, str);
	while (i < ft_strlen(str))
	{
		if (str[i] == '%')
		{
			ret += ft_filter(args, str[++i]);
			if (ret < 0)
				return (-1);
		}
		else
		{
			ret += ft_putchar_fd(str[i], 1);
			if (ret < 0)
				return (-1);
		}
		i++;
	}
	va_end(args);
	return (ret);
}
//Jabob Sober PRINTF
// #include <stdio.h>
// #include <stdarg.h>
// #include <string.h>
// int	yz_printf(const char *format, ...)
// {
// 	va_list	args;
// 	int		done;
// 
// 	va_start(args, format);
// 	done = vfprintf(stdout, format, args);
// 	va_end(args);
// 	return (done);
// }
// 
// int	main(void)
// {
// 	yz_printf("something we don't want to say.\n");
// 	yz_printf("Jacob wants to say.\n");
// }
//Jabob Sober PRINTF END
//Jabob Sober WOKRKING
// void	print_ints(int num, ...)
// {
// 	va_list args;
// 	
// 	va_start(args, num);
// 	
// 	for (int i=0; i < num; i++)
// 	{
// 		int value = va_arg(args,int);
// 		printf("%d: %d\n",i,value);
// 	}
// 	va_end(args);
// }
// 
// int	main(void)
// {
// 	print_ints(3, 24, 26, 312);
// 	print_ints(2, 256, 512);
// 	print_ints(7, 1, 2, 3, 4, 5, 6, 7);
// }
//Jabob Sober WOKRKING END
//Other GUY
// int	max(int	num_args, ...);
// 
// int	main(void)
// {
// 	max (3, 4, 6, 8);
// // 	printf("some string %d %f\n", 5, 5.5);
// 	return (0);
// }
// 
// int	max(int	num_args, ...)
// {
// 	int	i;
// 	va_list	args;
// 	
// 	i = 0;
// 	va_start(args, num_args);
// 	
// 	while (i < num_args)
// 	{
// 		int x = var_arg(args, int);
// 		printf("x: %d\n", x);
// 		i++;
// 	}
// 	va_end(args);
// 	return 0;
// }
// EDN
// ALDO VERSION
