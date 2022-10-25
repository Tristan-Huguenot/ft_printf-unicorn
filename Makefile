#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 17:29:15 by thugueno          #+#    #+#              #
#    Updated: 2022/10/25 18:44:32 by thugueno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ft_printf-unicorn

USER_PATH	=	../ft_printf

USER_LIB	=	libftprintf.a

USER_INC	=	${addprefix -I, ${shell find ${USER_PATH} -regex ".*/.*\.h" | grep -oh ".*\/"}}

SRC			=	src/test_c.c	\
				src/utils.c		\

OBJ			=	${SRC:.c=.o}

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

INCLUDE		=	-L${USER_PATH} -l${USER_LIB:lib%.a=%} -Iinclude/ ${USER_INC}

RM			=	rm -f

.c.o:		
			${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

${NAME}:	libft ${OBJ}
			${CC} ${CFLAGS} ${OBJ} ${INCLUDE} -o ${NAME}

libft:
			make -C ${USER_PATH}

all:		${NAME}

clean:
			${RM} ${OBJ}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:	all clean fclean re
