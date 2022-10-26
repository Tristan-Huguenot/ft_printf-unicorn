#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 17:29:15 by thugueno          #+#    #+#              #
#    Updated: 2022/10/26 13:59:48 by thugueno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ft_printf-unicorn

USER_PATH	=	../ft_printf/

USER_LIB	=	libftprintf.a

USER_INC	=	${addprefix -I, ${shell find ${USER_PATH} -regex ".*/.*\.h" | grep -oh ".*\/"}}

SRC			=	src/test_c.c		\
				src/test_s.c		\
				src/test_p.c		\
				src/test_d.c		\
				src/test_i.c		\
				src/test_u.c		\
				src/test_x.c		\
				src/test_upperx.c	\
				src/test_percent.c	\
				src/test_mix.c		\

B_SRC		=	src/test_width.c	\
				src/test_minus.c	\
				src/test_space.c	\
				src/test_plus.c		\

SRC_P		=	src/

UTILS		=	src/utils.c		\

OBJ			=	${SRC:.c=.o}

B_OBJ		=	${B_SRC:.c=.o}

CC			=	gcc

CFLAGS		=	-Wall -Wformat=0

INCLUDE		=	-L${USER_PATH} -l${USER_LIB:lib%.a=%} -Iinclude/ ${USER_INC}

RM			=	rm -f

MANDATORY	=	c s p d i u x upperx percent mix

BONUS		=	width minus zero dot sharp space plus

.c.o:		
			@${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}

all:		${MANDATORY}

${MANDATORY}: %:	ft_printf ${OBJ}
			@${CC} ${CFLAGS} ${UTILS} ${SRC_P}test_$*.o ${INCLUDE} -o $* && valgrind ./$* && ${RM} $*

m:			${MANDATORY}

${BONUS}: %:		ft_printf_bonus ${OBJ} ${B_OBJ}
			@${CC} ${CFLAGS} ${UTILS} ${SRC_P}test_$*.o ${INCLUDE} -o $* && valgrind ./$* && ${RM} $*

b:			${BONUS}

ft_printf:
			@make --silent -C ${USER_PATH}

ft_printf_bonus:
			@make bonus --silent -C ${USER_PATH}

clean:
			${RM} ${OBJ} ${B_OBJ}
			@make clean --silent -C ${USER_PATH}

fclean:		clean
			${RM} ${NAME}
			@make fclean --silent -C ${USER_PATH}

re:			fclean all

.PHONY:	all c s p d i u x upperx mix libft clean fclean re
