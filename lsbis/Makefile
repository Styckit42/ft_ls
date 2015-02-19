# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcabon <tcabon@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/20 18:02:51 by tcabon            #+#    #+#              #
#    Updated: 2015/02/19 21:12:20 by tcabon           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ls

SRC = 		ft_aff.c \
			ft_aff_l.c \
			ft_argcheck.c \
			ft_count.c \
			ft_error.c \
			ft_files.c \
			ft_init_struct.c \
			ft_right.c \
			ft_stat_l.c \
			ft_tri_ascii.c \
			ft_tri_r.c \
			ft_tri_t.c \
			main.c \
			mainevent.c \

OBJ = $(patsubst %.c, %.o, $(SRC))

CFLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME): $(OBJ)
	make -C libft
	gcc $(OBJ) -L libft -lft -o $(NAME) -g

proper: $(NAME) clean

clean:
	rm -f $(OBJ)
	make clean -C libft/

fclean: clean
	rm -f $(NAME)
	rm -f libft/libft.a

re: fclean all

%.o: %.c
	gcc -c $< -o $@
