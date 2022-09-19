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

static char	*ft_setstring(char c)
{
	char	*str;

	if (c == 'x')
		return (str = "0123456789abcdef");
	if (c == 'X')
		return (str = "0123456789ABCDEF");
	return (NULL);
}

int	ft_nbrlen(long nbr, char c)
{
	int	len;

	len = 0;
	if (nbr < 0 && (c == 'x' || c == 'X'))
		nbr = UINT_MAX + nbr + 1;
	if (nbr <= 0)
		len++;
	while (nbr)
	{
			nbr /= 16;
			len++;
	}
	return (len);
}

int	ft_putnbrx(long nbr, char c)
{
	char	*str;

	str = ft_setstring(c);
	if (nbr < 0)
		nbr = UINT_MAX + nbr + 1;
	if (nbr >= 16)
		if (ft_putnbrx(nbr / 16, c) == -1)
			return (-1);
	if (write(1, &str[nbr % 16], 1) != 1)
		return (-1);
	return (0);
}

int	ft_printx(int x, char key)
{
	ssize_t	bytes;

	bytes = ft_putnbrx((long)x, key);
	if (bytes == -1)
		return (bytes);
	return (ft_nbrlen((long)x, key));
}
