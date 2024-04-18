/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 23:45:47 by lagea             #+#    #+#             */
/*   Updated: 2024/03/26 01:34:29 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_puthex_upper(long n)
{
	char	*base_16;
	int		index;

	base_16 = "0123456789ABCDEF";
	index = n % 16;
	if (n / 16)
	{
		ft_puthex_upper(n / 16);
		ft_putchar(base_16[index]);
	}
	else
		return (ft_putchar(base_16[index]));
	return (1);
}
