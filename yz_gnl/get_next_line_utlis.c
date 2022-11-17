/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utlis.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:32:04 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/11/17 18:02:55 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*check_char(const char *str, int c)
{
	if(!str)
		return (NULL);
	while (*str != '\0')
	{
		if(*str == (char)c)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
char	*strjoin()
{
	
}

// We create the check_char function that checks/searches for a char in a string,
// returns a pointer to the found char or NULL if not found
// !!! QUESTIONS: I don't understand the condution in the while statement !!!