/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:27:13 by lagea             #+#    #+#             */
/*   Updated: 2024/04/18 23:50:01 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
#include "../inc/printf.h"

int	print_char(char c)
{
	if (ft_isprint((char)c))
		return (write(1, &c, 1));
	return (0);
}

int	print_string(char *s)
{
	int	i;

	i = -1;
	if (!s)
		print_string("(null)");
	else
	{
		while (s[++i])
		{
			if (ft_isprint((char)s[i]))
				write(1, &s[i], 1);
			else
				return (0);
		}
	}
	return (1);
}

int	print_decimal(int n)
{
	ft_putnbr_fd(n, 1);
	return (1);
}

int	print_hex_lower(long n)
{
	char	*base_16;

	base_16 = "0123456789abcdef";
	if (n < 16)
		return (print_char(base_16[n]));
	else
	{
		if (print_hex_lower(n / 16))
			return (print_char(base_16[n % 16]));
	}
	return (0);
}

int	print_hex_upper(long n)
{
	char	*base_16;

	base_16 = "0123456789ABCDEF";
	if (n < 16)
		return (print_char(base_16[n]));
	else
	{
		if (print_hex_upper(n / 16))
			return (print_char(base_16[n % 16]));
	}
	return (0);
}

int	main(void)
{
	char *s = NULL;
	char *s1 = "\nTest\n";
	long long n = -9223372036854775807;
	int nb = 1010;

	// // printf("\n%p\n",&s);
	// printf("\n%p\n",&n);
	// // print_add(&s);
	// print_add(&n);

	// printf("%s\n",s);
	// printf("%s\n",s1);
	// print_string(s);
	// print_string(s1);
	
	// printf("\n");
	// printf("%d", print_hex_lower((int)nb));

	// printf("\n");
	// printf("%d", print_hex_upper((int)nb));

	
}