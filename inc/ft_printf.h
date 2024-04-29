/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:37:15 by lagea             #+#    #+#             */
/*   Updated: 2024/04/29 11:52:34 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_PRINTF_H
#ifdef FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

/* Utils */
int		ft_print_char(char c);
int		ft_print_string(const char *s);
int		ft_print_decimal(int n);
int		ft_print_hex_lower(unsigned int n);
int		ft_print_hex_upper(unsigned int n);

/* Utils_2 */
int		ft_print_udecimal(unsigned int n);
int		ft_print_add(unsigned long add);
int		ft_print_hex_add(unsigned long n);

/* Utils_len */
int		ft_int_len(long n);
int		ft_add_len(unsigned long add);
int		ft_hex_len(unsigned int hex);

/* Utils_lbft */
void	ft_put_unbr_fd(unsigned int n, int fd);
int		ft_isascii(int c);
void	ft_put_nbr_fd(int n, int fd);

/* Utils_libft_2 */
void	ft_putchar_fd(char c, int fd);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);

/* Parse */
int		ft_check_next_char(const char *s, int index);
int		ft_parse_printf(const char *s, int index, va_list par);

/* Printf */
int		ft_printf(const char *s, ...);

#endif
