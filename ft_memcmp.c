/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 19:52:12 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/07/18 19:52:13 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ch;
	const unsigned char	*sh;
	size_t				i;

	sh = s1;
	ch = s2;
	i = 0;
// 	if (n == 0 || (*sh == 0 && *ch == 0))
// 		return (0);
	if (!*sh)
		return (-1);
	if (!*ch)
		return (1);
	while (sh[i] == ch[i] && i < n && sh[i] != '\0' && ch[i] != '\0')
		i++;
	if (sh[i] == '\0' && ch[i] == '\0')
		return (sh[i - 1] - ch[i - 1]);
	if (sh[i - 1] == ch[i - 1] && i == n)
		return (0);
	if (sh[i] < ch[i])
		return (-1);
	if (sh[i] > ch[i])
		return (1);
	return (sh[i] - ch[i]);
}


// NAME
//      memcmp -- compare byte string
// 
// LIBRARY
//      Standard C Library (libc, -lc)
// 
// SYNOPSIS
//      #include <string.h>
// 
//      int
//      memcmp(const void *s1, const void *s2, size_t n);
// 
// DESCRIPTION
//      The memcmp() function compares byte string s1 against byte string s2.  Both strings are assumed to be n bytes long.
// 
// RETURN VALUES
//      The memcmp() function returns zero if the two strings are identical, otherwise returns the difference between the first two differing bytes (treated as
//      unsigned char values, so that `\200' is greater than `\0', for example).  Zero-length strings are always identical.  This behavior is not required by C and
//      portable code should only depend on the sign of the returned value.
// 
// SEE ALSO
//      bcmp(3), strcasecmp(3), strcmp(3), strcoll(3), strxfrm(3), wmemcmp(3)
// 
// STANDARDS
//      The memcmp() function conforms to ISO/IEC 9899:1990 (``ISO C90'').