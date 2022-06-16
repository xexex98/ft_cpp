# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/16 21:49:49 by mbarra            #+#    #+#              #
#    Updated: 2022/06/16 21:50:57 by mbarra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Sed \

HEADER =  \

SRC = main.cpp  \

OBJ	= $(SRC:%.cpp=%.o) \

CC = c++ \

RM = rm -f \

CFLAGS = -std=c++98 -Wall -Wextra -Werror 

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