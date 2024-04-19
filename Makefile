SRC         = ft_bzero.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c

OBJS        = ${SRC:.c=.o}

HEAD        = libft.h

NAME        = libft.a

AR          = ar rc

RM          = rm -f

LIB         = ranlib

CC         = cc

CFLAGS      = -Wall -Wextra -Werror

all:        ${NAME}

.c.o:
	${CC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}
			${LIB} ${NAME}

clean:      
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:         fclean all

.PHONY:     all clean fclean re