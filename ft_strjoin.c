/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:07:26 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/26 19:42:57 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *str, char const *s1, char const *s2)
{
	int		i;
	char	*p_s1;
	char	*p_s2;

	p_s1 = (char*)s1;
	p_s2 = (char*)s2;
	i = 0;
	while (*p_s1 != '\0')
	{
		str[i++] = *p_s1;
		p_s1++;
	}
	while (*p_s2 != '\0')
	{
		str[i++] = *p_s2;
		p_s2++;
	}
	str[i] = '\0';
	return (str);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	return (ft_strcat(str, s1, s2));
}
