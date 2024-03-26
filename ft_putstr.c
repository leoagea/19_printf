/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 22:37:22 by lagea             #+#    #+#             */
/*   Updated: 2024/03/26 01:34:21 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putstr(char *str)
{
	size_t	index;

	index = 0;
	if (!str)
		write(1, "(null)", 6);
	while (str[index])
	{
		ft_putchar(str[index]);
		index++;
	}
	return (index);
}
