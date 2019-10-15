/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fajadron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 11:43:01 by fajadron          #+#    #+#             */
/*   Updated: 2019/10/08 15:27:01 by fajadron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int i;
	int number;
	int pos_neg;

	i = 0;
	number = 0;
	pos_neg = 1;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			pos_neg = -1;
		i++;
	}
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		number = str[i] - 48 + (number * 10);
		i++;
	}
	return (number * pos_neg);
}
