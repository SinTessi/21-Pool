# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wshela <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/22 23:54:55 by wshela            #+#    #+#              #
#    Updated: 2019/06/23 15:51:10 by wshela           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libone.a

FILES = ft_atoi.c ft_putchar.c ft_putnbr.c ft_putstr.c

OFILES = ft_atoi.o ft_putchar.o ft_putnbr.o ft_putstr.o

all:
	gcc -c $(FILES)
	ar rc $(NAME) $(OFILES)
	rm -rf $(OFILES)

clean:
	rm $(NAME)
