/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 21:34:11 by lagea             #+#    #+#             */
/*   Updated: 2024/04/20 20:04:36 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print_nb(unsigned int n, int fd)
{
	if (n / 10)
	{
		print_nb(n / 10, fd);
		print_nb(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

void	ft_put_unbr_fd(unsigned int n, int fd)
{
	unsigned long	nbr;

	nbr = (unsigned long)n;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr = -nbr;
	}
	print_nb(nbr, fd);
}
