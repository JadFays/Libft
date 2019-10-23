/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:43:01 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/23 01:10:55 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int i;
	int pos_neg;
	unsigned int number;

	i = 0;
	number = 0;
	pos_neg = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			pos_neg = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = str[i] - 48 + (number * 10);
		i++;
		if (number > 2147483647 && pos_neg == 1)
			return (-1);
		else if (number > 2147483648 && pos_neg == -1)
			return (0);
	}
	return (number * pos_neg);
}
