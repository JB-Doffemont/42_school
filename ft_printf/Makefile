# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/24 14:13:26 by jdoffemo          #+#    #+#              #
#    Updated: 2023/05/13 16:48:22 by jdoffemo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
HD = ./libftprintf.h
SRC =./ft_printf.c ./ft_putstr.c

OBJ = $(SRC:.c=.o)

FLAGS = -Wall -Wextra -Werror

.c.o:
	gcc $(FLAGS) -I $(HD) -c $< -o ${<:.c=.o}
	
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	
all: $(NAME)

clean: 
	rm -f $(OBJ)
	rm -f $(OBJ_BONUS)
	
fclean: clean
	rm -f $(NAME)
	
re: fclean all