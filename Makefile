#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 17:29:15 by thugueno          #+#    #+#              #
#    Updated: 2022/10/26 00:49:14 by thugueno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ft_printf-unicorn

USER_PATH	=	../ft_printf/

USER_LIB	=	libftprintf.a

USER_INC	=	${addprefix -I, ${shell find ${USER_PATH} -regex ".*/.*\.h" | grep -oh ".*\/"}}

SRC			=	src/test_c.c	\
				src/test_d.c	\
				src/test_i.c	\

SRC_P		=	src/

UTILS		=	src/utils.c		\

OBJ			=	${SRC:.c=.o}

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

INCLUDE		=	-L${USER_PATH} -l${USER_LIB:lib%.a=%} -Iinclude/ ${USER_INC}

RM			=	rm -f

MANDATORY	=	c s p d i u x upperx percent mix

.c.o:		
			@${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

all:		${MANDATORY}

${MANDATORY}: %:	libft ${OBJ}
			@${CC} ${CFLAGS} ${UTILS} ${SRC_P}test_$*.o ${INCLUDE} -o $* && ./$* && ${RM} $*

m:	${MANDATORY}

libft:
			@make --silent -C ${USER_PATH}

clean:
			${RM} ${OBJ}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:	all c s p d i u x upperx mix libft clean fclean re
