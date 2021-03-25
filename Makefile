SRCS	=	ft_memset.c		ft_strmapi.c	ft_atoi.c \
	 		ft_putchar_fd.c	ft_strncmp.c	ft_bzero.c \
			ft_putendl_fd.c	ft_strnstr.c	ft_calloc.c \
		  	ft_putnbr_fd.c	ft_strrchr.c 	ft_strlen.c \
			ft_isalnum.c	ft_putstr_fd.c	ft_memmove.c \
			ft_strtrim.c	ft_isalpha.c	ft_strlcpy.c \
			ft_split.c		ft_substr.c		ft_isascii.c \
			ft_strchr.c		ft_tolower.c	ft_isdigit.c \
			ft_memccpy.c	ft_strdup.c		ft_toupper.c \
			ft_isprint.c	ft_memchr.c		ft_strjoin.c \
			ft_itoa.c		ft_memcmp.c		ft_strlcat.c \
			ft_memcpy.c			

B_SRCS	= 	ft_lstclear.c	ft_lstadd_front.c	ft_lstsize.c \
			ft_lstlast.c	ft_lstdelone.c		ft_lstiter.c \
			ft_lstmap.c		ft_lstnew.c			ft_lstadd_back.c			

OBJS	=	${SRCS:.c=.o}

B_OBJS	=	${B_SRCS:.c=.o}

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}
NAME	=	libft.a

CC		=	clang

CLFAGS	=	-Wall -Wextra -Werror

${NAME}:	${OBJS}
		ar -rcs $@ $^

all:		${NAME}

bonus:		${OBJS} ${B_OBJS}
		ar -rcs ${NAME} $^

clean:
		rm -f ${OBJS} ${B_OBJS}

fclean:		clean
		rm -f ${NAME}

re:		fclean all

.PHONY: all bonus clean fclean re
