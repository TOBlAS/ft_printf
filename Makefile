# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcaborde <tcaborde@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 17:59:49 by tcaborde          #+#    #+#              #
#    Updated: 2021/12/03 23:17:51 by tcaborde         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = 	ft_printf.c \
		ft_putstr.c \
		ft_strlen.c \
		ft_putnbr.c \
		ft_puthexa.c \
		ft_putchar.c \
		ft_putnbrunsigned.c \
		ft_putadress.c \

FILEO = $(SRC:.c=.o)

HEADER = libftprintf.h

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(FILEO)
	ar rcs $(NAME) $(FILEO)

%.o: %.c $(HEADER)
	gcc $(FLAGS) -I. -c $< -o $@

clean:
	/bin/rm -f $(FILEO)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all 

.PHONY: all clean re fclean
