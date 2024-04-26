/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 23:23:35 by lagea             #+#    #+#             */
/*   Updated: 2024/04/20 15:39:06 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	lstsize;

	lstsize = 0;
	while (lst != (void *)0)
	{
		lstsize++;
		lst = lst->next;
	}
	return (lstsize);
}

/*int main(void)
{
	t_list *lst = malloc(sizeof(t_list));
	t_list *new;

	lst = ft_lstnew((void*)15);
	new->content = (void*) 30;
	ft_lstadd_front(&lst,new);

	//printf("%d\n",ft_lstsize(lst));
}*/
