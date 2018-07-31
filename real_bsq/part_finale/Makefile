# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hutricot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/25 22:14:01 by hutricot          #+#    #+#              #
#    Updated: 2018/07/25 22:35:22 by hutricot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = ft_checker_param.c \
	  ft_init.c \
	  ft_list_push.c \
	  ft_print_result.c \
	  ft_reader.c \
	  ft_util.c \
	  where_soluce.c 

all : $(NAME)

$(NAME) :
	gcc -o $(NAME) $(SRC)

clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean all
