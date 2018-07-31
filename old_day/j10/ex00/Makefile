# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hutricot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/16 15:17:22 by hutricot          #+#    #+#              #
#    Updated: 2018/07/19 11:14:30 by hutricot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_strlen.c \
	  srcs/ft_swap.c

SRC_O = ft_putchar.o \
      ft_putstr.o \
      ft_strcmp.o \
      ft_strlen.o \
	  ft_swap.o

all: $(NAME)

$(NAME) :
	gcc -c $(SRC) -I includes/
	ar rc $(NAME) $(SRC_O)

clean:
	rm -f $(SRC_O)

fclean: clean
	rm -f $(NAME)

re: fclean all
