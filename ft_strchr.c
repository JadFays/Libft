/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:19:29 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/23 00:04:38 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (ptr[i] != '\0')
	{
		if (ptr[i] == (unsigned char)c)
		{
			return ((char*)&ptr[i]);
		}
		i++;
	}
	if (c == 0)
		return ((char*)&ptr[i]);
	return (NULL);
}
