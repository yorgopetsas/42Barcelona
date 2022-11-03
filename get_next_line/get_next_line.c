/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:14:58 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/11/03 19:52:22 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char 	*yz_buffer_set(char *buffer)
{
	char	*tmp;
	int		c;
	int		bufflen;
	
	c = ft_strchr(buffer, '\n');
	bufflen = ft_strlen(buffer);
	if (c == (bufflen  - 1))
	{
		free(buffer);
		return (NULL);
	}
	if (c == -1)
	{
		free(buffer);
		return (NULL);
	}
	tmp = ft_substr(buffer, c + 1, bufflen - c + 1);
	free(buffer);
	return (tmp);
}

char	*yz_buffer_to_line(char *buffer)
{
	int		len;
	int		c;
	char	*line;
	
	c = 0;
	len = ft_strchr(buffer, '\n');
	if (!buffer)
		return (0);
	if (len == -1 )
		len = ft_strlen(buffer);
	line = malloc((len + 2) * sizeof(char));
	if (!line)
	{
		// free(line);
		return (NULL);
	}
	line[len + 1] = '\0';
	while (c < len + 1)
	{
		line[c] = buffer[c];
		c++;
	}
	return (line);
}

char	*yz_join_n_free(char *buffer, char *buf)
{
	char	*temp;
	
	temp = ft_strjoin(buffer, buf);
	free(buffer);
	return (temp);
}

char	*yz_load_buffer(int fd, char *buffer)
{
	int		bcount;
	char	tmp[BUFFER_SIZE + 1];
	
	bcount = read(fd, tmp, BUFFER_SIZE);
// 	if (bcount == -1)
// 	{
// 		free(buffer);
// 		return (NULL);
// 	}
	while (bcount > 0)
	{
		tmp[bcount] = '\0';
		buffer = yz_join_n_free(buffer, tmp);
		if (ft_strchr(buffer, '\n') != -1)
			return (buffer);
		bcount = read(fd, tmp, BUFFER_SIZE);
	}
	if (bcount == 0 && !buffer)
		return (NULL);
	return (buffer);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0 || (read(fd, NULL, 0) == -1))
		return (NULL);
	if (!buffer || (buffer && (ft_strchr(buffer, '\n') == -1)))
		buffer = yz_load_buffer(fd, buffer);
	if (!buffer)
	{
		free(buffer);
		return (NULL);
	}
	line = yz_buffer_to_line(buffer);
	if (!line)
	{
		free(line);
		return (NULL);
	}
	buffer = yz_buffer_set(buffer);
	return (line);
}
