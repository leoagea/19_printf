/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 20:11:57 by lagea             #+#    #+#             */
/*   Updated: 2024/04/20 15:39:49 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	lenght;

	lenght = 0;
	if (!s)
		return ;
	while (s[lenght])
		lenght++;
	write(fd, s, lenght);
	write(fd, "\n", 1);
}
