/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:09:39 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/10 15:26:36 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	char temp[ft_strlen(src)];

	i = 0;
	while (((char*)src)[i] != '\0')
	{
		temp[i] = ((char*)src)[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		((char*)dst)[i] = temp[i];
		i++;
	}
	return (dst);
}
