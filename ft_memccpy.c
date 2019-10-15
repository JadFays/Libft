/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 18:24:41 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/15 18:39:55 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memccpy(void *dst,const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr_dst = (unsigned char*)dst;
	unsigned char	*ptr_src = (unsigned char*)src;

	i = 0;
	while (i < n && ptr_src[i] != (unsigned char)c)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
		if (ptr_src[i] == (unsigned char)c && i < n)
			return (dst + i + 1);
	}
	return (0);
}
