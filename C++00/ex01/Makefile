# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/18 11:49:44 by jomirand          #+#    #+#              #
#    Updated: 2023/10/20 10:38:45 by jomirand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

RESET   = \033[0m
BLACK   = \033[1;30m
RED     = \033[1;31m
GREEN   = \033[1;32m
YELLOW  = \033[1;33m
BLUE    = \033[1;34m
PURPLE  = \033[1;35m
CYAN    = \033[1;36m
WHITE   = \033[1;37m

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRCS = 	phonebook.cpp\
		options.cpp\

OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	clear
	@echo "$(GREEN)./phonebook executable is ready!$(RESET)"

clean:
	@$(RM) $(OBJS)
	clear
	@echo "$(RED)object files have been deleted!$(RESET)"

fclean: clean
	@$(RM) $(NAME)
	clear
	@echo "$(RED)object files and executable have been deleted$(RESET)"

re: fclean all