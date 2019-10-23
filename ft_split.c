/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:27:12 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/23 02:36:46 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static char		*ft_malloc_object(char const *s, char c)
{
	int		i;
	char	*object;

	i = 0;
	while (s[i] != c)
		i++;
	if (!(object = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (*s != c)
	{
		object[i] = *s;
		i++;
		s++;
	}
	object[i] = '\0';
	return (object);
}

static int		ft_count_object(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	while (s[i] == c)
		i++;
	count = (s[i] != '\0') ? 1 : 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i + 1] != '\0')
		{
			if (s[i + 2] != c && s[i + 2] != '\0')
				count++;
			i++;
		}
		i++;
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	char	**tab;
	int		nb_object;
	int		i;
	int		j;

	if (!(s))
		return (NULL);
	nb_object = ft_count_object(s, c);
	if (!(tab = (char**)malloc(sizeof(char*) * (nb_object + 1))))
		return (NULL);
	i = 0;
	while (*s == c)
		s++;
	j = 0;
	while (*s != '\0' && j < nb_object)
	{
		tab[j] = ft_malloc_object(s, c);
		while (*s != c)
			s++;
		while (*s == c)
			s++;
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
