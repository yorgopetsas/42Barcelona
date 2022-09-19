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

NAME	= libftprintf.a

LIBFT_PATH	=	./libft
LIBFT	=	$(LIBFT_PATH)/libft.a
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
HEADER	= inc/ft_printf.h

SRCS	= src/ft_printf.c \
		src/ft_filter.c \
		src/ft_print_p.c \
		src/ft_uint.c \
		src/ft_hex.c \
		src/ft_printx.c

OBJS	= ${SRCS:%.c=%.o}

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(LIBFT_PATH)

all: $(LIBFT) $(NAME)

$(LIBFT):
		make -C $(LIBFT_PATH)

$(NAME): ${HEADER} ${OBJS}
		cp $(LIBFT) $(NAME)
		ar rc $(NAME) $(OBJS)
		@echo "printf compiled!"

clean:
		make clean -C $(LIBFT_PATH)
		$(RM) $(OBJS)

fclean:	clean
		make fclean -C $(LIBFT_PATH)
		$(RM) $(NAME)

re: fclean all
