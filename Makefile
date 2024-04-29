# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lagea <lagea@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/26 17:35:27 by lagea             #+#    #+#              #
#    Updated: 2024/04/29 12:16:28 by lagea            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RED=\033[0;31m
GREEN=\033[0;32m
YELLOW=\033[1;33m
BLUE=\033[0;34m
ORANGE=\033[38;2;255;165;0m
NC=\033[0m

NAME = libftprintf.a

SRC_DIR = src/
OBJ_DIR = obj/
INC_DIR = inc/
LIB_DIR = lib/
LIBNAME = $(NAME)

SRC = src/printf.c src/parse.c  src/utils.c src/utils_2.c src/utils_len.c src/utils_libft.c src/utils_libft_2.c
OBJ = $(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)

CC = gcc
RM	= rm -f
CFLAGS = -Wall -Wextra -Werror
INCS = -I$(INC_DIR) -I.

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INCS) -c $< -o $@

all: $(LIBFT) $(NAME)

$(NAME): $(OBJ)
	@echo "$(GREEN)Creating ft_printf library $(LIBNAME)...$(NC)"
	@ar rc $(LIBNAME) $(OBJ)
	@echo "$(BLUE)Library ft_printf created!$(NC)"

clean:
	@echo "$(ORANGE)Cleaning objects ft_printf...$(NC)"
	@$(RM) $(OBJ)
	@rm -rf $(OBJ_DIR)
	@echo "$(GREEN)Cleaned objects ft_printf!$(NC)"

fclean: clean
	@echo "$(ORANGE)Fully cleaning ft_printf...$(NC)"
	@$(RM) $(NAME)
	@echo "$(BLUE)Fully cleaned ft_printf!$(NC)"

re: fclean all

.PHONY: all clean fclean re