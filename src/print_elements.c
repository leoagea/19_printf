/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_elements.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:27:13 by lagea             #+#    #+#             */
/*   Updated: 2024/04/30 13:23:38 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_print_char(char c)
{
	return (write(1, &c, 1));
}

int	ft_print_string(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (write(1, "(null)", 6));
	return (write(1, s, ft_strlen(s)));
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
