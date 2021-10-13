# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chideyuk <chideyuk@student.42sp.org.b      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 15:09:26 by chideyuk          #+#    #+#              #
#    Updated: 2021/10/07 15:09:29 by chideyuk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY:	clean fclean re all

LIBFT	:= libft
NAME	:= libftprintf.a
CFLAGS	:= -Wall -Wextra -Werror -c
CC	:= clang
SRCS	:= ft_printf.c \
		ft_printf_utils.c \
		ft_treatchar.c \
		ft_treathex.c \
		ft_treatint.c \
		ft_treatptr.c \
		ft_treatstr.c \
		ft_treatuint.c \
		ft_uitoa.c

OBJ	:= $(SRCS:%.c=%.o)

all	: $(NAME)

$(NAME)	: $(OBJ)
	make  -C $(LIBFT)
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJ)

%.o	: %.c
	$(CC) $(CFLAGS) $<

clean	:
	rm -f $(OBJ)
	make clean -C $(LIBFT)

fclean	: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT)

re	: fclean all
