# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vletterp <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/04 06:15:18 by vletterp          #+#    #+#              #
#    Updated: 2020/01/04 06:23:00 by vletterp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf 
FLAGS = -Werror -Wextra -Wall
FRAMEWORKS = -framework OpenGL -framework AppKit
SRC = sources/*.c
INCLUDES = libft/libft.a minilibx_macos/libmlx.a

all:
	@make -C libft/ all
	@make -C minilibx_macos/ all
	gcc $(SRC) -o $(NAME) $(FLAGS) $(INCLUDES) $(FRAMEWORKS)

clean:
	@make -C libft/ clean
	@make -C minilibx_macos/ clean

fclean: clean
	/bin/rm -f $(NAME)
	@make -C libft/ clean

re: fclean all
