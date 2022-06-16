# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 22:49:36 by mbarra            #+#    #+#              #
#    Updated: 2022/06/01 23:01:55 by mbarra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook \

HEADER = contact.hpp phonebook.hpp \

SRC = contact.cpp phonebook.cpp \

OBJ	= $(SRC:%.cpp=%.o) \

CC = c++ \

RM = rm -f \

CFLAGS = -Wall -Wextra -Werror -std=c++98

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re