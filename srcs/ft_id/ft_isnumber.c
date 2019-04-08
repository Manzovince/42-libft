/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmanzoni <vmanzoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 21:42:55 by vmanzoni          #+#    #+#             */
/*   Updated: 2019/04/08 21:45:52 by vmanzoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int		ft_isnumber(char *str)
{
	int		i;

	i = 0;
	if (*str == '+' || *str == '-')
		i++;
	while (str[i])
		if (!ft_isdigit(str[i++]))
			return (0);
	if (!i || (i == 1 && (str[0] == '+' || str[0] == '-')))
		return (0);
	return (1);
}
