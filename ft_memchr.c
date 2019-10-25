/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 16:36:59 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/24 16:33:01 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr_s;

	ptr_s = (unsigned char*)s;
	while (n-- > 0)
	{
		if (*ptr_s == (unsigned char)c)
			return (ptr_s);
		ptr_s++;
	}
	return (NULL);
}
