# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/04 17:22:06 by ybenbrai          #+#    #+#              #
#    Updated: 2021/04/04 17:51:41 by ybenbrai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=main.c \

NAME = ft_ls

LIB = -Llibft -lft

HEADERS = ft_ls.h

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Werror -Wextra
all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft
	gcc -o $(NAME) $(OBJ) $(LIB) -I $(HEADERS)

clean:
	rm -f $(OBJ)
	@make -C libft clean

fclean: clean
	rm -f $(NAME)
	@make -C libft fclean

re: fclean all

%.o: %.c
	gcc $(FLAGS) -c -o $@ $<