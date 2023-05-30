# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdoffemo <jdoffemo@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/24 14:13:26 by jdoffemo          #+#    #+#              #
#    Updated: 2023/05/20 14:52:02 by jdoffemo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
NAME_BONUS = libft_bonus.a
HD = ./libft.h
SRC =./ft_isalpha.c ./ft_isdigit.c ./ft_isalnum.c \
	./ft_isascii.c ./ft_isprint.c ./ft_strlen.c \
	./ft_toupper.c ./ft_tolower.c ./ft_strlcpy.c \
	./ft_strlcat.c ./ft_atoi.c ./ft_strchr.c \
	./ft_strrchr.c ./ft_strncmp.c ./ft_strnstr.c \
	./ft_memset.c ./ft_bzero.c ./ft_memcpy.c \
	./ft_memchr.c ./ft_memcmp.c ./ft_memmove.c \
	./ft_calloc.c ./ft_strdup.c ./ft_substr.c \
	./ft_strjoin.c ./ft_strtrim.c ./ft_split.c \
	./ft_itoa.c ./ft_strmapi.c ./ft_striteri.c \
	./ft_putchar_fd.c ./ft_putstr_fd.c ./ft_putendl_fd.c \
	./ft_putnbr_fd.c

SRC_BONUS = ./ft_lstnew_bonus.c ./ft_lstadd_front_bonus.c ./ft_lstsize_bonus.c \
			./ft_lstlast_bonus.c ./ft_lstadd_back_bonus.c ./ft_lstdelone_bonus.c \
			./ft_lstclear_bonus.c ./ft_lstiter_bonus.c ./ft_lstmap_bonus.c
        
OBJ = $(SRC:.c=.o)
OBJ_BONUS = $(SRC_BONUS:.c=.o)

FLAGS = -Wall -Wextra -Werror

.c.o:
	gcc $(FLAGS) -I $(HD) -c $< -o ${<:.c=.o}
	
$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
	
bonus: libft_bonus.a

libft_bonus.a: $(OBJ) $(OBJ_BONUS)
	ar rc $(NAME_BONUS) $(OBJ) $(OBJ_BONUS)
	ranlib $(NAME_BONUS)
	
all: $(NAME)

clean: 
	rm -f $(OBJ) $(OBJ_BONUS)
	
fclean: clean
	rm -f $(NAME) $(NAME_BONUS)
	
re: fclean all