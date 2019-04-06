/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmanzoni <vmanzoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 15:27:38 by vmanzoni          #+#    #+#             */
/*   Updated: 2019/03/25 14:01:22 by vmanzoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_itoa(int n)
{
	char	*nbr;
	long	pos;
	long	div;

	if (!(nbr = ft_strnew(ft_nbrlen(n) + 1)))
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	pos = 0;
	div = 10 * ft_nbrlen(n);
	while (pos < ft_nbrlen(n))
	{
		nbr[pos++] = n / div + '0';
		div /= 10;
	}
	return (nbr);
}
