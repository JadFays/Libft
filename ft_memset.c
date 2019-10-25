/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:06:03 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/24 18:08:37 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned int	i;
	unsigned char	copy_c;
	unsigned char	*ptr;

	i = 0;
	copy_c = (unsigned char)c;
	ptr = b;
	while (i < len)
	{
		ptr[i] = copy_c;
		i++;
	}
	return ((unsigned char*)b);
}
