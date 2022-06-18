# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbarra <mbarra@student.21-school.ru>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/31 14:18:51 by mbarra            #+#    #+#              #
#    Updated: 2022/06/18 17:03:00 by mbarra           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=		ex00

HDR				=		$(wildcard $(HDR_DIR)/*.hpp)

HDR_DIR		=		.

SRC				=		$(wildcard $(SRC_DIR)/*.cpp)

SRC_DIR		=		.

OBJ				=		$(patsubst %.cpp, %.o, $(SRC))

CC				=		c++
RM				=		rm -f
CFLAGS		=		-std=c++98 -Wall -Wextra -Werror

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ) $(HDR)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re