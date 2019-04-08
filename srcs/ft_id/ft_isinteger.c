/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinteger.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmanzoni <vmanzoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 21:34:28 by vmanzoni          #+#    #+#             */
/*   Updated: 2019/04/08 21:45:39 by vmanzoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int		ft_isinteger(char *str)
{
	size_t	str_size;
	size_t	i;
	long	n;

	i = 0;
	str_size = ft_strlen(str);
	while (str[i++] == '0')
		str_size--;
	if (!ft_isnumber(str))
		return (0);
	n = ft_atoi(str);
	if (str_size > 11 || n > INT_MAX || n < INT_MIN)
		return (0);
	return (1);
}
