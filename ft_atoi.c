/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:43:01 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/25 12:24:20 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int				pos_neg;
	unsigned int	number;

	number = 0;
	pos_neg = 1;
	while (*str == '\t' || *str == '\n' || *str == '\v' || *str == '\f'
			|| *str == '\r' || *str == ' ')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			pos_neg = -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		number = *str - 48 + (number * 10);
		str++;
		if (number > 2147483647 && pos_neg == 1)
			return (-1);
		else if (number > 2147483648 && pos_neg == -1)
			return (0);
	}
	return (number * pos_neg);
}
