# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: causilva <@student.42lisboa.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/30 10:44:39 by causilva          #+#    #+#              #
#    Updated: 2025/08/28 11:28:07 by causilva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftgnl.a

SOURCES = src/get_next_line.c \
		src/get_next_line_utils.c

OBJECTS = $(SOURCES:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME): $(OBJECTS)
	rm -f $(NAME)
	ar -rcs $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
