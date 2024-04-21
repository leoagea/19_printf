/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:06:25 by lagea             #+#    #+#             */
/*   Updated: 2024/04/21 22:13:43 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ft_printf.h"
#include "libft/libft.h"
#include "limits.h"

int ft_printf(const char *s, ...)
{
	int len;
	int temp;
	int index;
	va_list arg;

	len = 0;
	temp = 0;
	index = 0;
	va_start(arg,s);
	while (s[index])
	{
		if (s[index] == '%')
		{
			if ((temp = ft_parse_printf(s,index,&arg)) != -1)
				index++;
		}
		else
			temp = ft_print_char(s[index]);
		if (temp == -1)
			len += 1;
		else 
			len += temp;
		index++;
	}
	va_end(arg);
	return len;
}

// int main()
// {
// 	// int res = ft_printf(" %p %p ", LONG_MIN, LONG_MAX);
// 	printf("\n");
// 	int res1 = printf(" %p %p ", (void *) LONG_MIN,(void *)LONG_MAX);

// 	// printf("\nres : %d\tres1 : %d\n",res,res1);

// 	// ft_putchar_fd(0,1);
// }

// cc printf.c parse.c utils.c utils_2.c ../libft/libft.a ; ./a.out