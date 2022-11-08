/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorgopetsas <yorgopetsas@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 20:00:40 by yzisis-p          #+#    #+#             */
/*   Updated: 2022/09/15 12:26:09 by yorgopetsas      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_putchar_fd(char c, int fd);

int		ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

int		ft_putnbr_fd(int n, int fd);

size_t	ft_strlen(const char *str);

#endif
