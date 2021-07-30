# **************************************************************************** #
#                                                                              #
#                                                          :::      ::::::::   #
#   Makefile                                             :+:      :+:    :+:   #
#                                                      +:+ +:+         +:+     #
#   By: rda-silv <rda-silv@student.42sp.org.br>      +#+  +:+       +#+        #
#                                                  +#+#+#+#+#+   +#+           #
#   Created: 2021/07/29 22:47:16 by rda-silv            #+#    #+#             #
#   Updated: 2021/07/29 22:47:29 by rda-silv           ###   ########.fr       #
#                                                                              #
# **************************************************************************** #


SRC	=	ft_isalpha.c ft_isascii.c ft_isdigit.c\
		ft_isprint.c ft_strchr.c ft

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
