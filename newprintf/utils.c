/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:27:13 by lagea             #+#    #+#             */
/*   Updated: 2024/04/18 22:23:52 by lagea            ###   ########.fr       */
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

// int main()
// {
// 	printf("%d\n",print_char('c'));
// }