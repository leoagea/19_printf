/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:27:13 by lagea             #+#    #+#             */
/*   Updated: 2024/04/18 22:39:08 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/printf.h"
#include "../inc/libft.h"

int	print_char(char c)
{
	if (ft_isprint((char)c))
		return write(1, &c, 1);
	return 0;
}

int print_string(char *s)
{
	int	i;

	i = -1;
	while(s[++i])
	{
		if (ft_isprint((char)s[i]))
			write(1, &s[i], 1);
		else
			return 0;
	}
	return 1;
}


int main()
{
	// printf("%d\n",print_char('c'));
	// printf("%d\n",print_string("\ntest de string"));
	// printf("%s\n","test de string");
	
}