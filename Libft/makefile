# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtretiak <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/24 13:30:50 by gtretiak          #+#    #+#              #
#    Updated: 2024/10/24 17:40:48 by gtretiak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rv -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY: clean fclean re

clean:
	rm -f $(OBJECTS)

fclean:
	clean
	rm -f $(NAME)

re:
	fclean
	all

