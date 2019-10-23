/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:46:29 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/23 00:14:21 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	int i;
	unsigned char *ptr_s1;
	unsigned char *ptr_s2;
	
	i = 0;
	ptr_s1 = (unsigned char*)s1;
	ptr_s2 = (unsigned char*)s2;
	while (ptr_s1[i] == ptr_s2[i] && --n > 0 &&
			(ptr_s1[i] != '\0' || ptr_s2[i] != '\0'))
	{
		if (ptr_s1[i] != ptr_s2[i])
			return (ptr_s1[i] - ptr_s2[i]);
		i++;
	}
	return (ptr_s1[i] - ptr_s2[i]);
}
