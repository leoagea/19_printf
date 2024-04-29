/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:27:13 by lagea             #+#    #+#             */
/*   Updated: 2024/04/29 11:58:38 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_print_char(char c)
{
	if (ft_isascii((int)c / 255))
		return (write(1, &c, 1));
	return (0);
}

int	ft_print_string(const char *s)
{
	int	i;

	i = -1;
	if (!s)
		return (ft_print_string("(null)"));
	else if (s[0] == '\0')
		return (0);
	else
	{
		while (s[++i])
		{
			if (ft_isprint((char)s[i]))
				write(1, &s[i], 1);
			else
				return (-1);
		}
	}
	return (ft_strlen(s));
}

int	ft_print_decimal(int n)
{
	ft_put_nbr_fd(n, 1);
	return (ft_int_len((int)n));
}

int	ft_print_hex_lower(unsigned int n)
{
	char	*base_16;

	base_16 = "0123456789abcdef";
	if (n < 16)
		return (ft_print_char(base_16[n]));
	else
	{
		if (ft_print_hex_lower(((unsigned int)n / 16)))
			ft_print_char(base_16[n % 16]);
	}
	return (ft_hex_len(n));
}

int	ft_print_hex_upper(unsigned int n)
{
	char	*base_16;

	base_16 = "0123456789ABCDEF";
	if (n < 16)
		return (ft_print_char(base_16[n]));
	else
	{
		if (ft_print_hex_upper(n / 16))
			ft_print_char(base_16[(unsigned int)n % 16]);
	}
	return (ft_hex_len(n));
}
