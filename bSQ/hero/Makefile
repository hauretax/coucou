# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makfile                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hutricot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/25 18:53:07 by hutricot          #+#    #+#              #
#    Updated: 2018/07/25 21:19:23 by hutricot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = hutricot:lramard
SRCS =	init_bsq.c \
		chained_list_bsq.c \
		ft_print_result.c \
		print_map.c \
		test_bsq.c \
		where_soluce.c \
		util.c

LIB = -L. -lmalib

OBJS = $(SRCS:.c=.o)
	
all: $(NAME)

$(NAME) : $(OBJS)
			gcc -o $(NAME) $(OBJS)
clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re :fclean all
