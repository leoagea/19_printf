/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putudec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 23:24:32 by lagea             #+#    #+#             */
/*   Updated: 2024/03/26 01:34:15 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putudec(unsigned long n)
{
	if (n / 10)
	{
		ft_putudec(n / 10);
		ft_putudec(n % 10);
	}
	else
		return (ft_putchar(n + '0'));
	return (1);
}
