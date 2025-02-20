/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_len.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 13:27:07 by lagea             #+#    #+#             */
/*   Updated: 2024/04/30 13:22:51 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	ft_strlen(char *s)
{
	int	len;

	len = 0;
	if (!s)
		return (0);
	while (s[len] != '\0')
		len++;
	return (len);
}

int	ft_int_len(long n)
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

int	ft_add_len(unsigned long add)
{
	int	len;

	len = 1;
	while (add / 16)
	{
		len++;
		add = add / 16;
	}
	return (len);
}

int	ft_hex_len(unsigned int hex)
{
	int	len;

	len = 1;
	while (hex / 16)
	{
		len++;
		hex = hex / 16;
	}
	return (len);
}
