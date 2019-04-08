/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmanzoni <vmanzoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 21:27:53 by vmanzoni          #+#    #+#             */
/*   Updated: 2019/04/08 21:29:13 by vmanzoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int		ft_pow(int n, int power)
{
	int	result;

	result = 1;
	while (power > 0)
	{
		result *= n;
		power--;
	}
	return (power < 0) ? 0 : result;
}
