# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mde-laga <mde-laga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/07 20:20:29 by lramard           #+#    #+#              #
#    Updated: 2019/02/11 13:53:02 by mde-laga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Werror -Wall -Wextra

SRC =	ft_printf.c \
		ft_parse.c \
		ft_stokpar.c \
		ft_structfiller.c \
		ft_structfiller2.c \
		ft_convert.c \
		ft_putstrplus.c \
		ft_reset.c \
		ft_convb.c \
		ft_convc.c \
		ft_convd.c \
		ft_convf.c \
		ft_float.c \
		ft_convg.c \
		ft_convi.c \
		ft_convmb.c \
		ft_convmf.c \
		ft_convmg.c \
		ft_convmx.c \
		ft_convo.c \
		ft_convp.c \
		ft_convperct.c \
		ft_convs.c \
		ft_convu.c \
		ft_convx.c\
		ft_lltoa.c \
		ft_llutoa_base.c \
		ft_error.c


OBJ = $(SRC:.c=.o)

INC = ft_printf.h

all: $(NAME)

$(NAME) : $(OBJ)
	make -C libft/
	cp libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
		gcc $(FLAGS) -I libft/ -I includes/ -c $< -o $@

clean :
		rm -f $(OBJ)
		make clean -C libft

fclean : clean
		rm -f $(NAME)
		make fclean -C libft/

re : fclean all
