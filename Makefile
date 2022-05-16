# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yzisis-p <yzisis-p@student.42barcelona.com>+#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/11 21:19:28 by ncolomer          #+#    #+#              #
#    Updated: 2019/10/18 23:01:39 by ncolomer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Werror -Wall -Wextra
SRC = main.c
OBJ = ${SRC:.c=.o}

all:	${NAME}

${NAME}:	

	${CC} ${CFLAGS} -c ${SRC} -o ${NAME}

${OBJ}:
	ar -rcs ${NAME} ${OBJ}

clean:
	rm -rf ${OBJ}

fclean:clean
	rm -fr ${NAME}

.PHONY: all clean fclean
