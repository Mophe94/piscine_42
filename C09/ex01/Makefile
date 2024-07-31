# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbajeux <dbajeux@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/28 10:53:54 by dbajeux           #+#    #+#              #
#    Updated: 2024/02/29 14:00:00 by dbajeux          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS =  -Wall -Wextra -Werror

LIB =libft.a

SRCS = srcs/ft_putchar.c  srcs/ft_swap.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_putstr.c

INCLUDE =  includes

LIB = libft.a

OBJ = $(SRCS:.c=.o)

all : $(LIB)

$(LIB) : $(OBJ)
	ar -rc $(LIB) $(OBJ)

$(OBJ) :
	$(CC) $(FLAGS) -I  $(INCLUDE) -c $(@:.o=.c) -o $@

clean :
	rm -f $(OBJ)

fclean: clean 
	rm -f $(LIB)

re : fclean $(LIB)
	

.PHONY : re clean fc all
	clean all 
