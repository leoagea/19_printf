SRCS = ft_putchar.c ft_putstr.c ft_putdec.c ft_putudec.c \
		ft_puthex_lower.c ft_puthex_upper.c ft_putadd.c \
		ft_printf.c

OBJS = ${SRCS:.c=.o}

LIB = libftprintf.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra -I ./

.c.o:
		${CC} ${CFLAGS} -MMD -c $< -o ${<:.c=.o}

${LIB}:	${OBJS}
		ar -rsc ${LIB} ${OBJS}

all: 	${LIB}

clean:	
		rm -f ${OBJS} 

fclean:	clean;
		rm -f ${LIB}

re:	fclean all

.PHONY: all clean fclean re 