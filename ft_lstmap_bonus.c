/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:33:56 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/25 14:22:56 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	if (lst != NULL)
	{
		if (!(new_list = ft_lstnew(f(lst->content))))
			return (NULL);
		if (!(new_list->next = ft_lstmap(lst->next, f, del)))
		{
			ft_lstdelone(new_list, del);
			return (NULL);
		}
		printf("test\n");
		return (new_list);
	}
	return (NULL);
}
