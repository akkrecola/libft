# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 15:27:40 by elehtora          #+#    #+#              #
#    Updated: 2021/11/11 16:25:11 by elehtora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = *.c

OBJECTS = *.o

all : $(NAME) clean

$(NAME) :
	gcc -c -Wall -Wextra -Werror $(SRCS)
	ar rc $(NAME) $(OBJECTS)

clean :
	/bin/rm -f *.o

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all

