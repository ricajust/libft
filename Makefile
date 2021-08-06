# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ricajust <ricajust@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 0021/07/29 22:47:16 by da-silv           #+#    #+#              #
#    Updated: 2021/08/05 19:59:52 by ricajust         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC	=	ft_isalnum.c ft_isalpha.c ft_isascii.c\
		ft_isdigit.c ft_isprint.c ft ft_strchr.c\
		ft_strlen.c ft_strncmp.c ft ft_strrchr.c\
		ft_tolower.c ft_toupper.c ft_strcpy
		

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

CFLAGS	=	-Wall -Werror -Wextra

NAME	=	libft.a

rm	=	rm -f

LIB	=	ar rc

all:	$(NAME)

.c.o: 
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJ) libft.h
	ar rc $(NAME) $(OBJ)

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	fclean	all

.PHONY: all clear re fclean
