/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:34:40 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/15 18:58:25 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *tab;

	if (!count || !size)
		return (NULL);
	if (!(tab = (char*)malloc(sizeof(char) * (count * size))))
		return (NULL);
	ft_bzero(tab, size);
	return (tab);
}
