/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 00:14:35 by lagea             #+#    #+#             */
/*   Updated: 2024/03/26 02:46:11 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	call_fonction(va_list *ap, const char *str, size_t *index)
{
	*index += 1;
	if (*str == '%')
	{
		if (*(str + 1) == 'c')
			return (ft_putchar(va_arg(*ap, int)));
		else if (*(str + 1) == 's')
			return (ft_putstr(va_arg(*ap, char *)));
		else if (*(str + 1) == 'p')
			return (ft_putadd(va_arg(*ap, void *)));
		else if (*(str + 1) == 'd')
			return (ft_putdec(va_arg(*ap, long)));
		else if (*(str + 1) == 'i')
			return (ft_putdec(va_arg(*ap, long)));
		else if (*(str + 1) == 'u')
			return (ft_putudec(va_arg(*ap, unsigned long)));
		else if (*(str + 1) == 'x')
			return (ft_puthex_lower(va_arg(*ap, long)));
		else if (*(str + 1) == 'X')
			return (ft_puthex_upper(va_arg(*ap, long)));
		else if (*(str + 1) == '%')
			return (ft_putchar('%'));
		else
			*index -= 1;
	}
	return (-1);
}

int	ft_printf(const char *str, ...)
{
	int		tmp;
	size_t	len;
	size_t	index;
	va_list	param_var;

	len = 0;
	index = 0;
	va_start(param_var, str);
	while (str[index])
	{
		if (str[index] == '%')
			tmp = call_fonction(&param_var, str + index, &index);
		else
			tmp = ft_putchar(str[index]);
		if (tmp >= 0)
			len += 1;
		else
			len = tmp;
		index++;
	}
	va_end(param_var);
	return (len);
}
