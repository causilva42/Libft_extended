# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: causilva <@student.42lisboa.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/30 10:44:39 by causilva          #+#    #+#              #
#    Updated: 2025/08/28 11:04:34 by causilva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCES =  src/ft_printf_bonus.c \
		src/fill_flags_bonus.c \
		src/prints_bonus.c \
		src/prints_helpers_bonus.c

LIB_SOURCES = lib/ft_strlen.c \
			lib/ft_strchr.c \
			lib/ft_strcpy.c

OBJECTS = $(SOURCES:.c=.o) $(LIB_SOURCES:.c=.o)

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
