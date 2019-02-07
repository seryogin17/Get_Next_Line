# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thansen <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/30 22:17:04 by thansen           #+#    #+#              #
#    Updated: 2019/02/07 18:34:07 by thansen          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG = -Wall -Wextra -Werror
SRC = *.c
OBJ = *.o
all: $(NAME)

$(NAME):
		gcc $(FLAG) -c $(SRC) -I includes/
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)
clean:
		/bin/rm -f $(OBJ)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all
