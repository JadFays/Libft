/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 13:31:56 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/28 11:59:45 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	while (src[i] != '\0')
		i++;
	j = 0;
	while (size > 0 && src[j] != '\0' && j < size - 1)
	{
		dst[j] = src[j];
		j++;
	}
	if (size > 0)
		dst[j] = '\0';
	return (i);
}
