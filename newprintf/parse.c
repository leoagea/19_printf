/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:06:36 by lagea             #+#    #+#             */
/*   Updated: 2024/04/19 14:26:49 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/printf.h"

int	parse_printf(const char *s, int index, va_list *par)
{
	if (s[index + 1] == 'c')
		return (print_char(va_arg(*par, int)));
	else if (s[index + 1] == 's')
		return (print_string(va_arg(*par, char *)));
	else if (s[index + 1] == 'p')
		return (print_add(va_arg(*par, void *)));
	else if (s[index + 1] == 'd' || s[index + 1] == 'i')
		return (print_decimal(va_arg(*par, int)));
	else if (s[index + 1] == 'u')
		return (print_udecimal(va_arg(*par, unsigned int)));
	else if (s[index + 1] == 'x')
		return (print_hex_lower(va_arg(*par, long)));
	else if (s[index + 1] == 'X')
		return (print_hex_upper(va_arg(*par, long)));
	else if (s[index + 1] == '%')
		return (write(1, "%", 1));
	else
		return (0);
}