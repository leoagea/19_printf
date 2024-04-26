/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 23:42:38 by lagea             #+#    #+#             */
/*   Updated: 2024/04/26 17:27:30 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"
#include "../libft/libft.h"

int	ft_print_hex_add(unsigned long n)
{
	char	*base_16;

	base_16 = "0123456789abcdef";
	if (n < 16)
		return (ft_print_char(base_16[n]));
	else
	{
		if (ft_print_hex_add((unsigned long)n / 16))
			return (ft_print_char(base_16[n % 16]));
	}
	return (-1);
}

int	ft_print_add(unsigned long add)
{
	ft_print_string("0x");
	ft_print_hex_add(add);
	return (ft_add_len(add) + 2);
}

int	ft_print_udecimal(unsigned int n)
{
	ft_put_unbr_fd(n, 1);
	return (ft_int_len((unsigned int)n));
}
