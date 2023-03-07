# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yzisis-p <yzisis-p@42barcelona.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/11 17:59:27 by yzisis-p          #+#    #+#              #
#    Updated: 2023/03/07 22:58:47 by yzisis-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	case_five.c 	\
			case_four.c 	\
			case_hun.c 		\
			case_three_scenarios.c \
			case_three.c 	\
			case_two.c 		\
			case-controler.c 	\
			error_handling.c 	\
			helper-funcionts.c 	\
			main.c operations.c \
			case_fhun.c 	\
			stack-functions.c 

INCLUDE = push_swap.h

OBJS	= $(SRCS:.c=.o)

CC			= gcc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror -I.

NAME		= push_swap

%.o: %.c push_swap.h
	gcc $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS) $(INCLUDE)
			@ar rcs $(NAME) $(OBJS)
			@echo "Mandatory part compiled!"

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re


	