/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yzisis-p <yzisis-p@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:31:56 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/11/17 18:06:21 by yzisis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

// LIBRARY FOR READ
# include <unistd.h>
// My bet is that this should not be included
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 2
# endif

// LIBRARY MALLOC
# include <stdlib.h>

// Get Next Line Functions
char	*get_next_line(int fd);
char	*fd_read(int fd, char *total_buff);

char	*cut_static(char *total_buff);

// Get Next Line Utils
char	*check_char(const char *str, int c);
char	*nter_malloc(size_t nbytes, size_t size);
char	*ft_strjoinn(char *total_buff, char *tmp);
#endif