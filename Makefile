# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 15:27:40 by elehtora          #+#    #+#              #
#    Updated: 2022/01/19 19:59:57 by elehtora         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC			=	ft_alphabetize.c	\
				ft_atoi.c			\
				ft_bzero.c			\
				ft_del.c			\
				ft_dgtcnt.c			\
				ft_isalnum.c		\
				ft_isalpha.c		\
				ft_isascii.c		\
				ft_isdigit.c		\
				ft_islower.c		\
				ft_isprint.c		\
				ft_isupper.c		\
				ft_itoa.c			\
				ft_lstadd.c			\
				ft_lstdelone.c		\
				ft_lstnew.c			\
				ft_memalloc.c		\
				ft_memccpy.c		\
				ft_memchr.c			\
				ft_memcmp.c			\
				ft_memcpy.c			\
				ft_memdel.c			\
				ft_memmove.c		\
				ft_memrchr.c		\
				ft_memset.c			\
				ft_nl.c				\
				ft_putchar.c		\
				ft_putchar_fd.c		\
				ft_putcharnl.c		\
				ft_putendl.c		\
				ft_putendl_fd.c		\
				ft_putmem.c			\
				ft_putmemnl.c		\
				ft_putnbr.c			\
				ft_putnbrnl.c		\
				ft_putstr.c			\
				ft_putstr_fd.c		\
				ft_putstrnl.c		\
				ft_realloc.c		\
				ft_strchr.c			\
				ft_strclr.c			\
				ft_strcmp.c			\
				ft_strcpy.c			\
				ft_strequ.c			\
				ft_striter.c		\
				ft_striteri.c		\
				ft_strjoin.c		\
				ft_strlen.c			\
				ft_strmap.c			\
				ft_strmapi.c		\
				ft_strncmp.c		\
				ft_strncpy.c		\
				ft_strlcpy.c		\
				ft_strnequ.c		\
				ft_strnew.c			\
				ft_strrchr.c		\
				ft_strsplit.c		\
				ft_strsub.c			\
				ft_strtrim.c		\


#				ft_lstdel.c			\
				ft_lstmap.c			\
				ft_lstiter.c

OBJ = $(addsuffix .o, $(basename $(SRC)))

FLAGS = -Wall -Wextra -Werror

all : $(NAME) clean

CC :
	@gcc -c

$(NAME) :
	@gcc -c $(CFLAGS) $(SRC)
	@ar rc $(NAME) $(OBJ)

clean :
	@/bin/rm -f *.o

so:
	@gcc -c -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean $(NAME) clean

