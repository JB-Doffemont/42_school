# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/24 14:13:26 by jdoffemo          #+#    #+#              #
#    Updated: 2023/05/05 13:11:02 by jdoffemo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
HD = ./libft.h
SRC =./ft_isalpha.c \
	./ft_isdigit.c \
	./ft_isalnum.c \
	./ft_isascii.c \
	./ft_isprint.c \
	./ft_strlen.c \
	./ft_toupper.c \
	./ft_tolower.c \
	./ft_strlcpy.c \
	./ft_strlcat.c \
	./ft_atoi.c \
	./ft_strchr.c \
	./ft_strrchr.c \
	./ft_strncmp.c \
	./ft_strnstr.c \
	./ft_memset.c \
	./ft_bzero.c \
	./ft_memcpy.c \
	./ft_memchr.c \
	./ft_memcmp.c \
	./ft_memmove.c \
	./ft_calloc.c \
	./ft_strdup.c \
	./ft_substr.c \
	./ft_strjoin.c \
	./ft_strtrim.c \
	./ft_split.c \
	./ft_itoa.c
        
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
fclean: clean
	rm -f $(NAME)
re: fclean all