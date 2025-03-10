# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/09 15:15:54 by rbardet-          #+#    #+#              #
#    Updated: 2025/03/09 19:01:30 by rbardet-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
SOURCES = main.cpp \
		phonebook.class.cpp \
		contact.class.cpp \

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)

$(NAME): $(SOURCES)
	$(CC) $(CFLAGS) -o $(NAME) $(SOURCES)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re

