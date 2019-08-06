# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhutchin <rhutchin@student.co.za>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/05 11:36:38 by rhutchin          #+#    #+#              #
#    Updated: 2019/08/06 19:52:23 by rhutchin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	minishell

SRC =	main.c norm.c error.c built_ins.c engine.c exec.c echo.c env_funcs.c cd.c env_builders.c

DIR_O = obj
DIR_S = srcs

SRCS = $(addprefix $(DIR_S)/,$(SRC))
OBJECTS = $(addprefix $(DIR_O)/,$(SRC:.c=.o))

INCL = -I./includes -I./libft/includes

$(DIR_O)/%.o: $(DIR_S)/%.c
	@echo "\033[1;35;m[Compiling $<] \t\033[0m"
	@gcc -Wall -Werror -Wextra $(INCL) -c -o $@ $<

all: makelibft temp $(NAME)


makelibft:
	@make -C libft

temp:
	@mkdir -p obj

$(NAME): temp $(OBJECTS)
	@echo "\033[1;34;m[Making... $(NAME)]\033[0m"
	@gcc -lreadline -Wall -Werror -Wextra $(OBJECTS) $(INCL) ./libft/libft.a -o $(NAME)

clean:
	@make -C libft clean
	@echo "\033[1;33;m[Cleaning]\033[0m"
	@rm -f $(OBJECTS)

fclean: clean
	@make -C libft fclean
	@echo "\033[1;32;m[Force Cleaning]\033[0m"
	@rm -f $(NAME)

re: fclean all
	@echo "\033[1;31;m[Recompiled]\033[0m"

.PHONY: all clean fclean re
