/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:33:56 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/23 06:48:09 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;

	if (lst == NULL || f == NULL)
		return (NULL);
	if (lst != NULL)
	{
		new_list = ft_lstnew(f(lst->content));
		new_list->next = ft_lstmap(lst->next, f, del);
		return (new_list);
	}
	return (NULL);
}
