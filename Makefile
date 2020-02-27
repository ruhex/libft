# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/21 22:14:23 by m-movcha          #+#    #+#              #
#    Updated: 2020/02/26 16:48:10 by m-movcha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADERS = ./
SRC = *.c
OBJECTS = *.o

all: $(NAME)

$(NAME): $(SRC) libft.h
	@gcc -Wall -Wextra -Werror -I$(HEADERS) -c $(SRC)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
