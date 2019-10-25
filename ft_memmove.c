/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 14:09:39 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/24 18:08:09 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	if (!dst && !src)
		return (0);
	i = 0;
	ptr_dst = (unsigned char*)dst;
	ptr_src = (unsigned char*)src;
	if (dst > src)
	{
		while (i < len)
		{
			ptr_dst[len - i - 1] = ptr_src[len - i - 1];
			i++;
		}
	}
	else
		ft_memcpy(ptr_dst, ptr_src, len);
	return (dst);
}
