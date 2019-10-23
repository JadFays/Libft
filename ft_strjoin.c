/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:07:26 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/23 01:42:50 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;
	size_t	i;

	if (!(s1))
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	len = 0;
	while (s1[len] != '\0')
	{
		str[i] = s1[len];
		i++;
		len++;
	}
	len = 0;
	while (s2[len] != '\0')
	{
		str[i] = s2[len];
		i++;
		len++;
	}
	str[i] = '\0';
	return (str);
}
