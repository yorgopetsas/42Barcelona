 # **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yzisis-p <yzisis-p@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/11 17:59:27 by yzisis-p          #+#    #+#              #
#    Updated: 2022/05/19 20:06:01 by yzisis-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NASRCS	=	ft_putstr_fd.c \
			ft_putnbr_fd.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_strlen.c

OBJS	= ${NASRCS:%.c=%.o}

CC			= gcc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror -I.

NAME		= libft.a
HEADER		= libft.h

%.o: %.c libft.h
	gcc $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			@ar rcs $(NAME) $(OBJS)
			@echo "libft compiled!"

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re