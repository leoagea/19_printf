/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdec.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 22:53:32 by lagea             #+#    #+#             */
/*   Updated: 2024/03/25 23:21:27 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putdec(long nb)
{
    //long nb;

    //nb = n;
    if(nb < 0)
    {
        nb *= -1;
        ft_putchar('-');
    }
    if(nb / 10)
    {
        ft_putdec(nb / 10);
        ft_putdec(nb % 10);
    }
    else
        ft_putchar(nb + '0');
}

int main (void)
{
    long nbr = -214748364786382;

    ft_putdec(nbr);
}