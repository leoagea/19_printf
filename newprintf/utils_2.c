/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 23:42:38 by lagea             #+#    #+#             */
/*   Updated: 2024/04/19 00:01:52 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/printf.h"
#include "../inc/libft.h"

int	print_add(void *add)
{
	print_string("0x");
	return (print_hex_lower((long)add));
}

int	print_udecimal(unsigned int n)
{
	ft_put_unbr_fd(n, 1);
	return (1);
}
