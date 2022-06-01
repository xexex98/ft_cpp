# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 22:49:36 by mbarra            #+#    #+#              #
#    Updated: 2022/06/01 22:52:52 by mbarra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook\

SRC = contact.cpp phonebook.cpp\

OBJ=$(patsubst %.cpp, %.o, $(SRC))\

CC = c++\
RM = rm -f\

CFLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re