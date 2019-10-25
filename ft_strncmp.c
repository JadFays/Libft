/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:46:29 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/24 18:17:58 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	if (n == 0)
		return (0);
	i = 0;
	ptr_s1 = (unsigned char*)s1;
	ptr_s2 = (unsigned char*)s2;
	while (ptr_s1[i] == ptr_s2[i] && i < n && ptr_s1[i] != '\0' &&
			ptr_s2[i] != '\0')
		i++;
	if (ptr_s1[i] != ptr_s2[i])
		return (ptr_s1[i] - ptr_s2[i]);
	return (0);
}
