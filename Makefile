
SRC	=	ft_isalpha.c ft_isascii.c ft_isdigit.c

OBJ	=	$(SRC:.c=.o)

CC	=	cc

NAME	=	libft.a

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -c -o libft

clean: 
	rm -rf $(OBJ)
