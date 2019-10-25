/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:21:35 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/25 13:56:46 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *ptr_lst;
	t_list *ptr_stock;

	if (!lst || !*lst || !del)
		return ;
	ptr_lst = *lst;
	while (ptr_lst != NULL)
	{
		ptr_stock = ptr_lst->next;
		ft_lstdelone(ptr_lst, del);
		ptr_lst = ptr_stock;
	}
	*lst = NULL;
}
