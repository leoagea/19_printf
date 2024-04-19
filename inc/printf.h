/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:37:15 by lagea             #+#    #+#             */
/*   Updated: 2024/04/19 23:06:54 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_H
#ifdef PRINTF_H

# include "unistd.h"
# include <limits.h>
# include <stdarg.h>
# include <stdio.h>

/* Utils */
int	print_char(char c);
int	print_string(char *s);
int	print_decimal(int n);
int	print_hex_lower(unsigned int n);
int	print_hex_upper(unsigned int n);

/* Utils_2 */
int	print_udecimal(unsigned int n);
int	print_add(void *add);
int	int_len(long n);

/* Parse */
int	parse_printf(const char *s, int index, va_list *par);

/* Printf */
int ft_printf(const char *s, ...);

#endif