# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gchuinar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/14 17:24:37 by gchuinar          #+#    #+#              #
#    Updated: 2019/02/02 13:03:15 by gchuinar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_PATH = src

SRC_NAME = ft_atoi_ull.c	\
	ft_check_base.c	\
	ft_check_nbr.c	\
	ft_strndup.c	\
	ft_strdup.c	\
	ft_putfloat.c	\
	ft_convert_base.c	\
	ft_strcat.c	\
	ft_count_option.c	\
	ft_check_flags.c	\
	ft_mult_is_neg.c	\
	ft_mantisse.c	\
	ft_prefix.c	\
	ft_fill_zero.c	\
	ft_putnstr.c	\
	bzero.c	\
	ft_isdigit.c	\
	ft_strchr.c	\
	ft_do_add.c	\
	ft_add_bin.c	\
	ft_addsame_len.c	\
	ft_do_div_2	\
	ft_sizecmp.c	\
	ft_get_mem.c	\
	ft_swap_mult.c	\
	ft_do_sous.c	\
	ft_convert_u.c	\
	ft_decal.c	\
	ft_power_dbl.c	\
	ft_bitoa.c	\
	ft_do_mult.c	\
	ft_display_a_A.c	\
	ft_display_h.c	\
	ft_strjoin.c	\
	ft_uputnbr.c	\
	ft_doop_str.c	\
	ft_conv_b_d.c	\
	ft_uitoa.c	\
	ft_display_l.c	\
	ft_memset.c	\
	ft_double_to_ull.c	\
	ft_printf.c	\
	ft_putchar.c	\
	ft_putendl.c	\
	ft_putfloat_hexa.c	\
	ft_putlong.c	\
	ft_putlonglong.c	\
	ft_putnbr.c	\
	ft_strchr.c	\
	ft_strlen.c	\
	ft_strnew.c	\
	ft_strrev.c	\
	ft_uputlonglong.c	\

OBJ_PATH = obj

CPPFLAGS = -Iinclude

NAME = a.out

CC = gcc

CFLAGS = 

OBJ_NAME = $(SRC_NAME:.c=.o)

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $^

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	rm -fv $(OBJ)

fclean: clean
	rm -fv $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
