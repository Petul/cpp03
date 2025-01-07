# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pleander <pleander@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/07 14:04:54 by pleander          #+#    #+#              #
#    Updated: 2025/01/07 14:25:44 by pleander         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := ScavTrap
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++11
SOURCES := main.cpp ClapTrap.cpp ScavTrap.cpp

OBJECTS := $(SOURCES:.cpp=.o)

.PHONY: all
all: $(NAME)

$(NAME): $(OBJECTS)
		$(CXX) $(OBJECTS) -o $(NAME)

%.o: %.cpp
		$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
		rm -f $(OBJECTS)

.PHONY: fclean
fclean: clean
		rm -f $(NAME)

.PHONY: re
re: fclean all
