# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmanzoni <vmanzoni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/22 14:45:27 by vmanzoni          #+#    #+#              #
#    Updated: 2019/04/05 21:34:17 by vmanzoni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

HEADER	=	includes/libft.h

SRC		=	srcs/*/*.c

OBJ		=	*.o

OBJ_DIR	=	ft_obj

CC		=	gcc

FLAGS	=	-I. -c

CFLAGS	=	-Wall -Werror -Wextra

RM		=	rm -rf

all: 		$(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRC)
	mkdir $(OBJ_DIR)
	mv *.o $(OBJ_DIR)
	ar rc $(NAME) $(addprefix $(OBJ_DIR)/, $(OBJ))
	@echo "\033[1;34mLibft\t\t\033[1;33mCompilation\t\033[0;32m[OK]\033[0m"

clean:
	$(RM) $(OBJ_DIR)

fclean:	clean
	$(RM) $(NAME)

re:		fclean all
