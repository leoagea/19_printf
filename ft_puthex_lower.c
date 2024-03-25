/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_lower.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 23:29:19 by lagea             #+#    #+#             */
/*   Updated: 2024/03/26 00:10:18 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_lower(long n)
{
	char	*base_16;
	int		index;

	base_16 = "0123456789abcdef";
	index = n % 16;
	if (n / 16)
	{
		ft_puthex_lower(n / 16);
		ft_putchar(base_16[index]);
	}
	else
		ft_putchar(base_16[index]);
}
