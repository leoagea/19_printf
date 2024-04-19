# Define compiler
CC = gcc

# Define compiler flags
CFLAGS = -Wall -Wextra -Werror

# Define source directory, object directory, and libft directory
SRCDIR = src
OBJDIR = obj
LIBFTDIR = libft

# Automatically find all .c files in SRCDIR and define their .o counterparts in OBJDIR
SRC = $(shell ls $(SRCDIR)/*.c)
OBJ = $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

# Define the library name
LIBNAME = libftprintf.a

# Include path for libft (if needed)
INCLUDES = -I$(LIBFTDIR)/inc

# First rule is the one executed when no parameters are fed to the Makefile
all: $(LIBNAME)

# Rule to make the library
$(LIBNAME): $(OBJ)
	mkdir -p $(OBJDIR)
	ar rcs $(LIBNAME) $(OBJ)

# This rule says how to make an .o file out of a .c file
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Clean objects in object directory and the library
clean:
	rm -rf $(OBJDIR)/*.o

fclean : clean
	rm -f $(LIBNAME)

# Rebuild everything
re: clean all

# This is a special target that tells make that 'clean' and 're' are not files
.PHONY: all clean re
