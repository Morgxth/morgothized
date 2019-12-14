# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vletterp <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/11 14:28:40 by vletterp          #+#    #+#              #
#    Updated: 2019/09/20 19:51:20 by vletterp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_*.c 
OUT = ft_*.o 
INCLUDES = ./

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) 
	ar rc $(NAME) $(OUT)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
