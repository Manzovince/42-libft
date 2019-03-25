/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmanzoni <vmanzoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 22:12:06 by vmanzoni          #+#    #+#             */
/*   Updated: 2019/01/29 21:49:00 by vmanzoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_atoi(const char *str)
{
	long long	sign;
	long long	nbr;
	size_t		i;

	i = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	nbr = 0;
	while (ft_isdigit((int)str[i]))
	{
		nbr = nbr * 10 + (long long)(str[i] - '0');
		i++;
		if (nbr > 2147483647 || nbr < -2147483648)
			return (-1);
	}
	return (sign * nbr);
}
