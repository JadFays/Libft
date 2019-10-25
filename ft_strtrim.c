/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:22:56 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/25 13:28:17 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_check_set(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static	int		ft_strcount(char const *s1, char const *set)
{
	int i;
	int rslt;
	int memr;

	i = 0;
	memr = 0;
	rslt = 0;
	while (s1[i] != '\0')
	{
		while ((ft_check_set(s1[i + memr], set)) == 1)
			memr++;
		if (i == 0 && s1[i + memr] != '\0')
			i += memr;
		else if (i != 0 && s1[i + memr] != '\0')
		{
			i += memr;
			rslt += memr;
		}
		else if (s1[i + memr] == '\0')
			return (rslt);
		memr = 0;
		rslt++;
		i++;
	}
	return (rslt);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		size;
	int		start;
	char	*new_str;

	if (!s1)
		return (NULL);
	else if (!set)
		return ((char*)s1);
	size = ft_strcount(s1, set);
	if (!(new_str = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	start = 0;
	while ((ft_check_set(s1[i + start], set)) == 1)
		start++;
	while (i < size)
	{
		new_str[i] = s1[i + start];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
