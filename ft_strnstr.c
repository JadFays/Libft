/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 12:08:01 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/24 18:17:37 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	temp;

	i = 0;
	j = 0;
	if (((!*s1) && *s2))
		return (NULL);
	else if (!*s2)
		return ((char *)s1);
	while (len-- > 0)
	{
		if (s1[i] == s2[j])
		{
			temp = len + 1;
			while (s1[i + j] == s2[j] && s2[j] != '\0' && temp-- > 0)
				j++;
			if (s2[j] != '\0')
				j = 0;
			else
				return ((char*)s1 + i);
		}
		i++;
	}
	return (0);
}
