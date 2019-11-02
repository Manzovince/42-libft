/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_powd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmanzoni <vmanzoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 21:27:53 by vmanzoni          #+#    #+#             */
/*   Updated: 2019/09/11 14:23:20 by vmanzoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

double		ft_powd(int n, int power)
{
	double	result;

	result = 1;
	while (power > 0)
	{
		result *= n;
		power--;
	}
	return (power < 0) ? 0 : result;
}
