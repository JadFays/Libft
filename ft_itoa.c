/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 21:05:35 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/15 22:32:49 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static	int	ft_count(int n)
{
	int power;
	int i;
	
	i = 1;
	power = 10;
	while (power <= n)
	{
		power *= 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int		len;
	int		neg;
	char	*str;

	neg = (n < 0) ? 1 : 0;
	if (n < 0)
		n *= -1;
	len = ft_count(n);
	if (!(str = (char*)malloc(sizeof(char) * (len + neg + 1))))
		return (NULL);
	str[len] = '\0';
	if (neg)
		str[0] = '-';
	else
		len--;
	while (len >= 0 + neg)
	{
		str[len] = n % 10 + 48;
		n /= 10;
		len--;
	}
	return (str);
}

/*int		main(void)
{
	printf("%s\n", ft_itoa(+1238742));
	return (0);
}*/
