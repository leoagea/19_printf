/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_libft.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:40:29 by lagea             #+#    #+#             */
/*   Updated: 2024/04/30 12:45:07 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static void	print_unb(unsigned int n, int fd)
{
	if (n / 10)
	{
		print_unb(n / 10, fd);
		print_unb(n % 10, fd);
	}
	else
		ft_print_char(n + '0');
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
	print_unb(nbr, fd);
}

static void	print_nb(long n, int fd)
{
	if (n / 10)
	{
		print_nb(n / 10, fd);
		print_nb(n % 10, fd);
	}
	else
		ft_print_char(n + '0');
}

void	ft_put_nbr_fd(int n, int fd)
{
	long	nbr;

	nbr = (long)n;
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nbr = -nbr;
	}
	print_nb(nbr, fd);
}
