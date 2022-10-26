# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thugueno <thugueno@student.42angoulem      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/13 01:34:31 by thugueno          #+#    #+#              #
#    Updated: 2022/10/25 23:59:40 by thugueno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRC			= 	src/ft_isalpha.c		\
				src/ft_isdigit.c		\
				src/ft_isalnum.c		\
				src/ft_isascii.c		\
				src/ft_isprint.c		\
				src/ft_strlen.c			\
				src/ft_memset.c			\
				src/ft_bzero.c			\
				src/ft_memcpy.c			\
				src/ft_memrcpy.c		\
				src/ft_memmove.c		\
				src/ft_strlcpy.c		\
				src/ft_strlcat.c		\
				src/ft_toupper.c		\
				src/ft_tolower.c		\
				src/ft_strchr.c			\
				src/ft_strrchr.c		\
				src/ft_strncmp.c		\
				src/ft_memchr.c			\
				src/ft_memcmp.c			\
				src/ft_strnstr.c		\
				src/ft_atoi.c			\
				src/ft_calloc.c			\
				src/ft_strdup.c			\
				src/ft_substr.c			\
				src/ft_strjoin.c		\
				src/ft_strtrim.c		\
				src/ft_split.c			\
				src/ft_itoa.c			\
				src/ft_strmapi.c		\
				src/ft_striteri.c		\
				src/ft_putchar_fd.c		\
				src/ft_putstr_fd.c		\
				src/ft_putendl_fd.c		\
				src/ft_putnbr_fd.c		\
				src/ft_lstadd_front.c	\
				src/ft_lstsize.c		\
				src/ft_lstlast.c		\
				src/ft_lstadd_back.c	\
				src/ft_lstdelone.c		\
				src/ft_lstclear.c		\
				src/ft_lstiter.c		\
				src/ft_lstmap.c			\
				src/ft_strchr_charset.c	\
				src/ft_char_in_set.c	\

OBJ			= 	${SRC:.c=.o}

HEADER		=	libft.h	

INC_D		=	include/

CC			= 	gcc

CFLAGS		= 	-Werror -Wextra -Wall

INCLUDE		=	-I ${INC_D}

RM			= 	rm -f

ECHO		=	@echo \

ifdef TAB
	ECHO += "${TAB}"
endif

.c.o:
			@${CC} ${CFLAGS} ${INCLUDE} -c $< -o ${<:.c=.o}
			${ECHO} [libft]: Compiling ${<:.c=.o}

${NAME}:	${OBJ}
			@ar rcs $@ $?
			${ECHO} [libft]: Creating ${NAME}
			${ECHO} [libft]: ${NAME} done.

all:		${NAME}

clean:
			@${RM} ${OBJ}
			${ECHO} [libft]: Removing object

fclean:		clean
			@${RM} ${NAME}
			${ECHO} [libft]: Removing ${NAME}

re:			fclean all

.PHONY:	all clean fclean re
