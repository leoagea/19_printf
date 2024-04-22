/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:06:25 by lagea             #+#    #+#             */
/*   Updated: 2024/04/22 15:15:40 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ft_printf.h"
#include "libft/libft.h"
#include "limits.h"

int ft_printf(const char *s, ...)
{
	// int len;
	int temp;
	int index;
	va_list arg;

	// len = 0;
	temp = 0;
	index = 0;
	va_start(arg,s);
	while (s[index])
	{
		if (s[index] == '%' && ft_check_next_char(s, index))
		{
			temp += ft_parse_printf(s,index, arg);
			index++;
		}
		else
			temp += ft_print_char(s[index]);
		index++;
	}
	va_end(arg);
	return temp;
}

// int main()
// {
// 	int res = ft_printf("7V%d;7I#7stzo%%%d%XxQyB\r%cz^%c?CaJ\nNcl?", -1553747769, 1553655994, 1950551726,-1176848849, -1900883211);
// 	printf("\n");
// 	int res1 = printf("7V%d;7I#7stzo%%%d%XxQyB\r%cz^%c?CaJ\nNcl?", -1553747769, 1553655994, 1950551726,-1176848849, -1900883211);

// 	printf("\nres : %d\tres1 : %d\n",res,res1);

// 	// ft_putchar_fd(0,1);
// }

// cc printf.c parse.c utils.c utils_2.c ../libft/libft.a ; ./a.out