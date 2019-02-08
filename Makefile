# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lramard <lramard@student42.fr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/07 20:20:29 by lramard           #+#    #+#              #
#    Updated: 2019/02/08 11:23:38 by lramard          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf

FLAGS = -Wall -Wextra

SRC = ft_printf.c \
				ft_parse.c \
				ft_percent.c \
				ft_putstrplus.c \
				ft_error.c \
				ft_convx.c\
				ft_convu.c \
				ft_convp.c \
				ft_convo.c \
				ft_convs.c \
				ft_convmx.c \
				ft_convi.c \
				ft_convert.c \
				ft_convd.c \
				ft_convc.c \
				ft_structfiller.c \
				ft_structfiller2.c \
				ft_stokpar.c \
				ft_reset.c \
				ft_lltoa.c \
				ft_llutoa_base.c \
				maintest.c




OBJ = $(SRC:.c=.o)

INC = ft_printf.h

all: $(NAME)

$(NAME) : $(INC) $(OBJ) $(SRC)
	make -C libft
	gcc $(FLAGS) -c $(SRC) -I$(INC)
	gcc $(FLAGS) -o $(NAME) $(OBJ) libft/libft.a

clean :
	rm -f $(OBJ)
	make clean -C libft

fclean : clean
	rm -f $(NAME)
	rm -f libft/libft.a

re : fclean all