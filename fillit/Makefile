# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vletterp <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/07 15:44:58 by vletterp          #+#    #+#              #
#    Updated: 2019/12/07 15:51:36 by vletterp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
CC = GCC
CFLAGS = -Wall -Wextra -Werror
INCL = /includes
INCL_LIB = ./libft/libft.a
OBJS = main.o
SRCS = srcs/
FXLL_SRCS = main.c 
SRCS = $(addprefix $(SRCS_DIR), $(FXLL_SRCS))
LIB = make -C ./libft/

all: $(NAME)

$(NAME):
	$(LIB)
	@$(CC) $(CFLAGS) -c $(SRCS) $(INCL)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(INCL_LIB)

clean:
	rm -rf $(OBJS)
	make -C libft/ clean

fclean:
	rm -rf $(NAME)
	make -C ./libft/ fclean

re: fclean all
