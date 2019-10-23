/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 21:05:35 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/23 03:34:43 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static int	ft_count(unsigned int n)
{
	int				i;
	unsigned int	power;

	i = 1;
	power = 10;
	while (power <= n && i < 10)
	{
		power *= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	char			*str;
	int				neg;
	int				size;
	unsigned int	number;

	neg = 0;
	if (n < 0)
	{
		number = n * -1;
		neg = 1;
	}
	else
		number = n;
	size = ft_count(number) + neg;
	if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	if (neg == 1)
		str[0] = '-';
	str[size] = '\0';
	while (--size >= neg + 0)
	{
		str[size] = number % 10 + 48;
		number /= 10;
	}
	return (str);
}
