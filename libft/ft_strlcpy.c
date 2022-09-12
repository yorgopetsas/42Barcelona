/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 22:05:21 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/05/19 20:31:30 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	c;

	c = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (c < size - 1 && src[c] != '\0')
	{
		dst[c] = src[c];
		c++;
	}
	dst[c] = '\0';
	return (ft_strlen(src));
}

/* int	main(void)
{
	char	*dst;
	const char	*src = "abcd";
	size_t	size = 3;
	
	// n = strlcpy(dst, src, len);
    // :w
	// n = snprintf(dst, len, "%s", src);

	ft_strlcpy(dst, src, size);
	printf("d %s", dst);
	
} */
