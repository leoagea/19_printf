/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:37:15 by lagea             #+#    #+#             */
/*   Updated: 2024/04/18 23:48:39 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define PRINTF_H
#ifdef PRINTF_H

#include "unistd.h"
#include <limits.h>
#include <stdio.h>

int	print_char(char c);
int	print_string(char *s);
int	print_decimal(int n);
int	print_hex_lower(long n);
int	print_hex_upper(long n);

int	print_add(void *add);

#endif