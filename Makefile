# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nfujisak <nfujisak@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/30 17:46:31 by nfujisak          #+#    #+#              #
#    Updated: 2024/04/30 18:15:42 by nfujisak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC         = ft_bzero.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
				ft_memset.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
				ft_isprint.c ft_toupper.c ft_tolower.c ft_strlen.c ft_strlcpy.c \
				ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c \
				ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
				ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
				ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BSRC		= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
				 ft_lstdelone.c ft_lstclear.c ft_lstiter.c

ROBJS		= ${SRC:.c=.o}

BOBJS		= ${BSRC:.c=.o}

OBJS		= $(ROBJS)
ifdef WITH_BONUS
OBJS 		+= $(BOBJS)
endif

HEAD        = libft.h

NAME        = libft.a

AR          = ar rc

RM          = rm -f

LIB         = ranlib

CC         = cc

CFLAGS      = -Wall -Wextra -Werror

all:        ${NAME}

bonus:
			${MAKE} WITH_BONUS=1

.c.o:
	${CC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}
			${LIB} ${NAME}

clean:      
			${RM} ${ROBJS} ${BOBJS}

fclean:		clean
			${RM} ${NAME}

re:         fclean all

.PHONY:     all bonus clean fclean re