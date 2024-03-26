/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 22:53:32 by lagea             #+#    #+#             */
/*   Updated: 2024/03/26 00:53:26 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putdec(long nb)
{
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	if (nb / 10)
	{
		ft_putdec(nb / 10);
		ft_putdec(nb % 10);
	}
	else
		return ft_putchar(nb + '0');
	return 1;
}
