/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_len.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 13:27:07 by lagea             #+#    #+#             */
/*   Updated: 2024/04/20 16:50:56 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "inc/ft_printf.h"

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

int	add_len(void *add)
{
	int len;
	long addr;

	addr = (long)add;
	len = 1;
	while (addr / 16)
	{
		len++;
		addr = addr / 16;
	}
	return (len);
}

int	hex_len(unsigned int hex)
{
	int len;

	len = 1;
	while (hex / 16)
	{
		len++;
		hex = hex / 16;
	}
	return (len);
}