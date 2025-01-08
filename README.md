# ft_printf

This repository contains my implementation of the [ft_printf](docs/en.subject.pdf) project from [42](https://www.42.fr/). The goal of this project is to recreate the well-known `printf` function in C, handling various format specifiers and flags. 

![Score of the project](docs/ProjectResult.png)

## Table of Contents

1. [About the Project](#about-the-project)  
2. [Project Structure](#project-structure)  
3. [Supported Conversions](#supported-conversions)  
4. [Getting Started](#getting-started)  
5. [Usage](#usage)  

---

## About the Project

The [ft_printf](docs/en.subject.pdf) project aims to replicate (part of) the functionality of the C standard library function `printf`, which prints output according to a format string.  
Some functionalities might be restricted compared to the standard version of `printf`.

### Objectives

- Understand the inner workings of the standard I/O library.  
- Learn to handle variable argument lists in C with `stdarg.h`.  
- Create a maintainable codebase that mimics part of the standard library function.  
- Demonstrate consistent coding style and robust error handling.

---

## Project Structure

- **includes/**  
  Contains the `ft_printf.h` header, which declares all functions and data structures used.

- **src/**  
  Contains the C source files, including the main `ft_printf.c` file and various helpers.

- **Makefile**  
  Defines compilation targets such as `all`, `clean`, `fclean`, `re`.

---

## Supported Conversions

According to the [ft_printf](docs/en.subject.pdf) project requirements, the following conversions are typically implemented:

- **c** : Print a single character  
- **s** : Print a string (array of characters)  
- **p** : Print a pointer address (in hexadecimal)  
- **d** : Print a signed decimal integer  
- **i** : Print a signed decimal integer (same as `d`)  
- **u** : Print an unsigned decimal integer  
- **x** : Print a number in lowercase hexadecimal  
- **X** : Print a number in uppercase hexadecimal  
- **%** : Print the literal `%` character

---

## Getting Started

### Prerequisites

- A C compiler (e.g., Clang or GCC)
- The `make` utility

### Installation

1. **Clone the repository:**
   ```bash
   git clone https://github.com/leoagea/19_printf.git printf
   ```

2. **Go into the directory:**
   ```bash
   cd printf
    ```

3. **Compile the library**
   ```bash
   make
   ```

### Usage

1. **Include the library head**
   ```bash
   #include "ft_printf.h"
   ```

2. **Link the library**
   ```bash
    gcc -Wall -Wextra -Werror -I includes/ main.c -L. -lftprintf -o my_program
    ```

3. **Call ft_printf**

    Use ft_printf in your code whenever you want by calling:
    ```bash
    ft_printf("Hello %s\n", World);
    ```
