# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybenbrai <ybenbrai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/27 10:16:09 by ybenbrai          #+#    #+#              #
#    Updated: 2022/11/21 20:48:26 by ybenbrai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
SRC=ft_atoi.c \
ft_bzero.c  \
ft_itoa.c \
ft_nbrlen.c \
ft_strrev_str.c \
ft_putstr_len.c \
ft_strswap.c \
ft_putnbr_len.c \
ft_putnbr_dec.c \
ft_putnbr_base.c \
ft_putnbr_base_p.c \
ft_puthexup.c \
ft_isupper.c \
ft_islower.c \
ft_puthexlow.c \
ft_puthex.c \
ft_putdec.c \
ft_putchar_len.c \
ft_printf.c \
ft_intcount.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_isspace.c \
ft_lstadd.c \
ft_lstdel.c \
ft_lstdelone.c \
ft_lstiter.c \
ft_memalloc.c \
ft_memccpy.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memdel.c \
ft_memmove.c \
ft_memset.c \
ft_putchar.c \
ft_putchar_fd.c \
ft_putendl.c \
ft_putendl_fd.c \
ft_putnbr.c \
ft_putnbr_fd.c \
ft_putstr.c \
ft_putstr_fd.c \
ft_strcat.c \
ft_strchr.c \
ft_strclr.c \
ft_strcmp.c \
ft_strcpy.c \
ft_strdel.c \
ft_strdup.c \
ft_strequ.c \
ft_striter.c \
ft_striteri.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlen.c \
ft_strmap.c \
ft_strmapi.c \
ft_strncat.c \
ft_strncmp.c \
ft_strncpy.c \
ft_strnequ.c \
ft_strnew.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strsplit.c \
ft_strstr.c \
ft_strsub.c \
ft_strtrim.c \
ft_tolower.c \
ft_toupper.c \

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC)
	ar rc $(NAME) *.o

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)
re : fclean all
