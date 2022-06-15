# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/15 19:42:05 by mbarra            #+#    #+#              #
#    Updated: 2022/06/15 19:42:05 by mbarra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/09 22:27:09 by mbarra            #+#    #+#              #
#    Updated: 2022/06/11 21:38:43 by mbarra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl \

HEADER = Harl.hpp \

SRC = main.cpp Harl.cpp \

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