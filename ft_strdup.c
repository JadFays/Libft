/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 17:46:57 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/16 02:22:57 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		size;
	char	*n_str;

	size = ft_strlen(s);
	if (!(n_str = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (i < size)
	{
		n_str[i] = s[i];
		i++;
	}
	n_str[i] = '\0';
	return (n_str);
}
