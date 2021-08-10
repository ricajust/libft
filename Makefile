# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rda-silv <rda-silv@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 0021/07/29 22:47:16 by da-silv           #+#    #+#              #
#    Updated: 2021/08/09 22:39:42 by rda-silv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC	=	ft_isalnum.c ft_isalpha.c ft_isascii.c\
		ft_isdigit.c ft_isprint.c ft_memset.c \
		ft_memcpy.c
		

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

CFLAGS	=	-Wall -Werror -Wextra

NAME	=	libft.a

INCLUDE = libft.h

rm	=	rm -f

LIB	=	ar rc

all:	$(NAME)

.c.o: 
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean	all

runw:
	bash libft-war-machine/grademe.sh
	
.PHONY: all clear re fclean
