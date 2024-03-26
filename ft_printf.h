/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 22:27:08 by lagea             #+#    #+#             */
/*   Updated: 2024/03/26 00:44:08 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

size_t	ft_putchar(char c);
size_t	ft_putstr(char *str);
size_t	ft_putdec(long nb);
size_t	ft_putudec(unsigned long n);
size_t	ft_puthex_lower(long n);
size_t	ft_puthex_upper(long n);
size_t	ft_putadd(void *add);

#endif