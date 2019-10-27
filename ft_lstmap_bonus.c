/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:33:56 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/26 15:19:24 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;
	t_list	*first_list;

	if (lst == NULL || f == NULL)
		return (NULL);
	first_list = ft_lstnew(NULL);
	new_list = ft_lstnew(f(lst->content));
	first_list->next = new_list;
	while (lst->next != NULL)
	{
		lst = lst->next;
		if (!(new_elem = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
	}
	return (first_list->next);
}
