# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 22:49:36 by mbarra            #+#    #+#              #
#    Updated: 2022/06/16 21:26:17 by mbarra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account \

HEADER = Account.hpp \

SRC = Account.cpp tests.cpp \

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