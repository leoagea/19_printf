# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lagea <lagea@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/26 17:35:27 by lagea             #+#    #+#              #
#    Updated: 2024/04/26 17:48:23 by lagea            ###   ########.fr        #
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
LIBNAME = $(LIB_DIR)$(NAME)

SRC = src/printf.c src/parse.c  src/utils.c src/utils_2.c src/utils_len.c
OBJ = $(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)


LIBFT 		= libft/libft.a
LIBFT_PATH 	= libft/

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
	@mkdir -p $(LIB_DIR)
	@ar rc $(LIBNAME) $(OBJ)
	@echo "$(BLUE)Library ft_printf created!$(NC)"

$(LIBFT):
	@echo "$(YELLOW)Compiling Libft...$(NC)"
	@$(MAKE) -C $(LIBFT_PATH)
	
clean:
	@echo "$(ORANGE)Cleaning objects ft_printf...$(NC)"
	@$(RM) $(OBJ)
	@rm -rf $(OBJ_DIR)
	@$(MAKE) -C $(LIBFT_PATH) clean
	@echo "$(GREEN)Cleaned objects ft_printf!$(NC)"

fclean: clean
	@echo "$(ORANGE)Fully cleaning ft_printf...$(NC)"
	@$(RM) $(LIBNAME)
	@rm -rf $(LIB_DIR)
	@echo "$(BLUE)Fully cleaned ft_printf!$(NC)"

re: fclean all

.PHONY: all clean fclean re