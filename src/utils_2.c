/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 23:42:38 by lagea             #+#    #+#             */
/*   Updated: 2024/04/19 15:26:45 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/printf.h"
#include "../inc/libft.h"

int	print_add(void *add)
{
	print_string("0x");
	return (print_hex_lower((long)add));
}

int	print_udecimal(unsigned int n)
{
	ft_put_unbr_fd(n, 1);
	return (1);
}

int	int_len(long n)
{
	size_t	len_nbr;

	len_nbr = 0;
	if (n < 0)
	{
		n = -n;
		len_nbr = 1;
	}
	else if (n == 0)
		len_nbr = 1;
	while (n != 0)
	{
		n /= 10;
		len_nbr++;
	}
	return (len_nbr);
}
