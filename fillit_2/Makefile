# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alanter <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/12/06 17:28:03 by alanter           #+#    #+#              #
#    Updated: 2017/12/15 15:38:31 by gofernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

INCLUDE = ./fillit_dir/includes/
SRCS_DIR = ./fillit_dir/srcs/
OBJ_DIR = ./fillit_dir/obj/
RM = /bin/rm
CFLAGS = -Wall -Wextra -Werror
LIB = -L./libft -lft

FILES = main initializesq printsq ft_ors checksq checktetri 

CFILES = $(patsubst %, $(SRCS_DIR)%.c, $(FILES))
OFILES = $(patsubst %, $(OBJ_DIR)%.o, $(FILES))

.PHONY : all clean fclean re

all : $(NAME)

libcomp :
	$(MAKE) -C ./libft/

$(OFILES):
	 gcc $(CFLAGS) -c -I$(INCLUDE) $(CFILES)
	 mv *.o $(OBJ_DIR)

$(NAME): libcomp $(OFILES)
	 gcc $(CFLAGS) -o $(NAME) $(OFILES) $(LIB)

clean :
	-rm $(OFILES)

fclean : clean
	-rm $(NAME)

re : fclean all
