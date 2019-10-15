/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:06:03 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/08 15:28:41 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memset(void *b, int c, unsigned int len)
{
	unsigned int	i;
	char			test;
	char			*ptr;

	i = 0;
	test = (char)c;
	ptr = b;
	while (i < len)
	{
		ptr[i] = test;
		i++;
	}
	return ((unsigned char *)b);
}
