/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:07:26 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/25 13:26:34 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	len;
	char	*str;

	if (!s1)
		return (NULL);
	else if (s1 && !s2)
		return ((char*)s1);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (*s1 != '\0')
	{
		str[i++] = *s1;
		s1++;
	}
	while (*s2 != '\0')
	{
		str[i++] = *s2;
		s2++;
	}
	str[i] = '\0';
	return (str);
}
