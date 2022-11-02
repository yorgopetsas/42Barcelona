/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 20:14:58 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/10/20 15:02:32 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2
# endif

char	*get_next_line(int fd);
char	*yz_load_buffer(int fd, char *buffer);
char	*yz_join_n_free(char *buffer, char *tmp);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strlcpy(char *dest, char *src, size_t size);
int		ft_strchr(const char *str, int ch);
// int		ft_strchr(const char *s, int c);
int		ft_strlen(const char *str);
char	*yz_buffer_to_line(char *buffer);
char 	*yz_buffer_set(char *buffer);
char	*ft_substr(char *s, int start, int len);

#endif
