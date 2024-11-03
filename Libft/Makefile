# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtretiak <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/24 13:30:50 by gtretiak          #+#    #+#              #
#    Updated: 2024/10/24 18:52:06 by gtretiak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
OBJECTS = $(SRCS:.c=.o)
SRCS = ft_isascii.c ft_isalnum.c ft_isdigit.c ft_isalpha.c ft_strlen.c ft_strncmp.c \
       ft_isprint.c ft_toupper.c
HEAD = libft.h
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror -I

all: $(NAME) 
	
$(NAME): $(OBJECTS)
	ar -rc $(NAME) -o $^

%.o: %.c
	cc $(CFLAGS) -I. -c $< -o $@

.PHONY: clean fclean re

clean:
	rm -f $(OBJECTS)
fclean: clean
	rm -f $(NAME)
re: fclean all
