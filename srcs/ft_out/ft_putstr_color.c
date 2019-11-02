/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_color.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmanzoni <vmanzoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 08:59:53 by vmanzoni          #+#    #+#             */
/*   Updated: 2019/09/23 13:36:52 by vmanzoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void ft_putstr_color(char *str, char color)
{
	if (color == 'R')
		write(1, RED, 5);
	else if (color == 'B')
		write(1, BLU, 5);
	else if (color == 'G')
		write(1, GRN, 5);
	else if (color == 'Y')
		write(1, YEL, 5);
	else if (color == 'M')
		write(1, MAG, 5);
	else if (color == 'C')
		write(1, CYN, 5);
	else if (color == 'W')
		write(1, RESET, 5);
	ft_putstr(str);
	write(1, RESET, 5);
}
