NAME			= libft.a

SRCS 			= ft_putchar.c \
					ft_putstr.c \
					ft_strcmp.c \
					ft_strlen.c \
					ft_swap.c

PATH_SRCS 		= ./srcs/

PATH_HEADER 	= ./includes/

_SRCS 			= ${addprefix ${PATH_SRCS}, ${SRCS}}

OBJS 			= ${_SRCS:.c=.o}

CC 				= gcc

RM 				= rm -rf

FLAGS 			= -Wall -Wextra -Werror

LINK 			= ar rc

INDEX			= ranlib

all:			${NAME}

.c.o:
				${CC} ${FLAGS} -I ${PATH_HEADER} -c $< -o ${<:.c=.o}

${NAME}: 		${OBJS}
				${LINK} ${NAME} ${OBJS}
				${INDEX} ${NAME}

clean:
				${RM} ${OBJS}

fclean: 		clean
				${RM} ${NAME}

re: 			fclean all

.PHONY: 		all clean fclean re
