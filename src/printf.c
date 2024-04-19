/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:06:25 by lagea             #+#    #+#             */
/*   Updated: 2024/04/19 15:18:47 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/printf.h"

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
			if ((temp = parse_printf(s,index,&arg)) != 0)
			{
				index++;
				printf("\n%d\n",temp);
			}
		}
		else
			temp = print_char(s[index]);
		if (temp == 0)
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
// 	printf("%d",ft_printf("Test de printf :%s\n","Autre"));
// 	// printf("%d", printf("%d ",1000));
// }

// cc printf.c parse.c utils.c utils_2.c ../libft/libft.a ; ./a.out