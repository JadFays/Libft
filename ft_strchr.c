/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:19:29 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/08 17:36:12 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;
	char *ptr;

	i = 0;
	ptr = (char *)s;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&ptr[i]);
		i++;
	}
	return (0);
}
