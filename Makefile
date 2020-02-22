# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/21 22:14:23 by m-movcha          #+#    #+#              #
#    Updated: 2020/02/21 22:17:47 by m-movcha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
HEADERS = .
SRC = *.c

all: $(NAME)

$(NAME):
	gcc -Wextra -Wall -Werror -o $(NAME) $(SRC) -I $(HEADERS)

clean:
	/bin/rm -f $(NAME)

re: clean all

.PHONY: all clean re
