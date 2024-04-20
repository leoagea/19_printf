/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 23:42:38 by lagea             #+#    #+#             */
/*   Updated: 2024/04/20 16:50:59 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "inc/ft_printf.h"

int	print_hex_add(long n)
{
	char	*base_16;

	base_16 = "0123456789abcdef";
	if (n < 16)
		return (print_char(base_16[n]));
	else
	{
		if (print_hex_add((long)n / 16))
			return (print_char(base_16[n % 16]));
	}
	return (0);
}

int	print_add(void *add)
{
	print_string("0x");
	print_hex_add((long)add);
	return (add_len(add) + 2);
}

int	print_udecimal(unsigned int n)
{
	ft_put_unbr_fd(n, 1);
	return (1);
}
