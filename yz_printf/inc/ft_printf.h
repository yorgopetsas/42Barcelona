/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:07:13 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/11/03 21:29:07 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// Library macro to retrieve the next argument in the parameter list of the 
//function.
# include <stdarg.h>

// Library macro to determine various properties of the various variable types. 
//In this case UINT_MAX
# include <limits.h>

// Librería Libft. POR QUE NO ES ../inc/ ?  Será por esta linea de Makefile 
//principal: LIBFT_PATH	=	./libft
# include "libft.h"

int	ft_printf(const char *str, ...);

int	ft_filter(va_list args, const char keyword);

int	ft_print_p(unsigned long long num);

int	ft_unint(unsigned int n);

int	ft_printx(int x, char key);

int	ft_hex(unsigned long long num, char key);

#endif
