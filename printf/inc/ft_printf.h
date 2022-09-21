/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:59:27 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/09/19 22:40:25 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft.h"
# include <limits.h>

int	ft_printf(const char *str, ...);

int	ft_filter(va_list args, const char keyword);

int	ft_print_p(unsigned long long num);

int	ft_hex(unsigned long long num, char key);

int	ft_unint(unsigned int n);

int	ft_printx(int x, char key);

#endif
