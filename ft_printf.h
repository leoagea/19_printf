/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 22:27:08 by lagea             #+#    #+#             */
/*   Updated: 2024/03/26 00:11:54 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putdec(long nb);
void	ft_putudec(unsigned long n);
void	ft_puthex_lower(long n);
void	ft_puthex_upper(long n);
void	ft_putadd(void *add);

#endif