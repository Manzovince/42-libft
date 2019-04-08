/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmanzoni <vmanzoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 21:27:03 by vmanzoni          #+#    #+#             */
/*   Updated: 2019/04/08 21:29:47 by vmanzoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static double	abs_double(double a)
{
	return (a >= 0) ? a : -a;
}

double			ft_sqrt(double a)
{
	double epsilon;
	double result;

	result = a;
	epsilon = 1e-15;
	while (abs_double(result - a / result) > epsilon * result)
		result = (a / result + result) / 2.0;
	return (result);
}
