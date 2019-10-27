/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:27:12 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/26 20:44:30 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_malloc_object(char const *s, char c)
{
	int		i;
	char	*object;

	i = 0;
	while (s[i] != c && s[i])
	{
		i++;
	}
	if (!(object = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (*s != c && *s)
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
	while (s[i] != '\0' && s[i] == c)
		i++;
	count = (s[i] != '\0') ? 1 : 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i + 1] != '\0')
		{
			if (s[i + 1] != c)
				count++;
			i++;
		}
		i++;
	}
	return (count);
}

static void		ft_error_malloc(char **tab, int len)
{
	int		i;

	i = 0;
	while (i < len)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

static char		*ft_while_char(char const *s, char c)
{
	while (*s != c && *s != '\0')
		s++;
	while (*s == c && *s != '\0')
		s++;
	return ((char*)s);
}

char			**ft_split(char const *s, char c)
{
	char	**tab;
	int		nb_object;
	int		j;

	if (!s)
		return (NULL);
	nb_object = ft_count_object(s, c);
	if (!(tab = (char**)malloc(sizeof(char*) * (nb_object + 1))))
		return (NULL);
	while (*s == c)
		s++;
	j = 0;
	while (*s != '\0' && j < nb_object)
	{
		if (!(tab[j] = ft_malloc_object(s, c)))
		{
			ft_error_malloc(tab, nb_object);
			return (NULL);
		}
		s = ft_while_char(s, c);
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
