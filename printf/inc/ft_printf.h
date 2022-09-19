/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:59:27 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/09/15 12:17:41 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "../libft/libft.h"
//THIS ONE IS FOR THE "UINT_MAX" in printx - is it allowed, do i need it?
# include <limits.h>
// # include <unistd.h>

int	ft_printf(const char *str, ...);

int	ft_filter(va_list args, const char keyword);

int	ft_print_p(unsigned long long num);

int	ft_hex(unsigned long long num, char key);

int	ft_unint(unsigned int n);

int	ft_printx(int x, char key);

// int	printf (const char *format, ...);

#endif