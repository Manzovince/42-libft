/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmanzoni <vmanzoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 16:52:56 by vmanzoni          #+#    #+#             */
/*   Updated: 2019/06/01 16:36:56 by vmanzoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_read_file(char *file)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];
	char	*result;

	if ((fd = open(file, O_RDONLY)) == -1)
		return (NULL);
	while ((ret = read(fd, buf, BUF_SIZE)))
		buf[ret] = '\0';
	result = ft_strdup(buf);
	close(fd);
	return (result);
}
