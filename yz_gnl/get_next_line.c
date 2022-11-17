/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:31:55 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/11/17 18:02:53 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

// LYBRARY FOR OPEN 
# include <fcntl.h>

// LYBRARY FOR PRINTF
# include <stdio.h>

// OTHER LIBRARIES
// # include <limits.h>

char	*get_next_line(int fd)
{
	static char	*total_buff;
	char		*rtrn_buff;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (NULL);
	if (!total_buff || (total_buff && !(check_char(total_buff, '\n'))))
		total_buff = fd_read(fd, total_buff);
	if (!total_buff)
			return (NULL);
	rtrn_buff = take_line(total_buff);
	if (!rtrn_buff)
	{
		free(total_buff);
		return (NULL);
	}
	total_buff = cut_static(total_buff);
	return (rtrn_buff);
}

char	*fd_read(int fd, char *total_buff)
{
	char	*tmp;
	int		chk;

	tmp = nter_malloc(BUFFER_SIZE, 1);
	if (!tmp)
		return (NULL);
	chk = 1;
	while (chk > 0 && !check_char(tmp, '\n'))
	{
		chk = read(fd, tmp, BUFFER_SIZE);
		if (chk > 0)
		{
			tmp[chk] = '\0';
			total_buff = ft_strjoin(total_buff, tmp);
		}
	}
	free(tmp);
	if (chk == -1)
	{
		free(total_buff);
		return (NULL);
	}
	return (total_buff);
}

char	*cut_static(char *total_buff)
{
	size_t	indx;
	char*	new_total_buff;


}
//
// - We are going to use a static function as we need to have the same value 
// during each call of the function. 
// - We check if the buffer size is less then 0 and if fd is less then zero 
// as in this case we need to abort.
//
// - We add a read funcion with the file descriptor and the total buffer variable 
// (total_buff). We don't need to "open" as per project requierments. It uses a 
// temporary char variable + int chk. 
// - We create a cut_static function:
//
// MAIN

int	main(void)
{
	int		fd;
	int		bcount;
	char	*str;

	fd = open("text1.txt", O_RDONLY);
	bcount = 0;
	str = "0";
	while (str)
	{
		str = get_next_line(fd);
		if (str != NULL)
			printf("Line actual: %s \n", str);
		else
			return (0);
		bcount++;
	}
}