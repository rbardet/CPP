# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/09 15:15:54 by rbardet-          #+#    #+#              #
#    Updated: 2025/03/09 16:36:17 by rbardet-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SOURCES = megaphone.cpp

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)

$(NAME): $(SOURCES)
	$(CC) $(CFLAGS) -o $(NAME) $(SOURCES)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all fclean re

