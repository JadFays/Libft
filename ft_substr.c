/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 18:58:54 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/25 12:14:50 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	if (!(s))
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len && s[i] != '\0')
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
