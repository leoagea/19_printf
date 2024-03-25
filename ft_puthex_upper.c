/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 23:45:47 by lagea             #+#    #+#             */
/*   Updated: 2024/03/25 23:56:50 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_upper(int n)
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
		ft_putchar(base_16[index]);
}
