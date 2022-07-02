# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ywadday <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/28 22:17:01 by ywadday           #+#    #+#              #
#    Updated: 2021/11/28 22:17:01 by ywadday          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

INCLUDE = ft_printf.h 

SOURCES = ft_putchar.c ft_hex.c ft_phex.c ft_putnbr.c\
	  ft_putunbr.c ft_putstr.c ft_phex.c ft_printf.c format_converter.c\

OBJET = $(SOURCES:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJET)
	ar -rcs $(NAME) $(OBJET) 

%.o : %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJET)

fclean: clean
	rm -f $(NAME)

re: fclean all

