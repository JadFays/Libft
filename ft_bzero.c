/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 16:29:33 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/24 17:20:59 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, unsigned int n)
{
	unsigned char	*ptr;
	unsigned int	i;

	i = 0;
	ptr = (unsigned char*)s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
