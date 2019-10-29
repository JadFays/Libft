/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:50:28 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/29 14:01:14 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
		i++;
	}
	return (dst);
}
