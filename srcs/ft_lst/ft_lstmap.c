/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmanzoni <vmanzoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:12:22 by vmanzoni          #+#    #+#             */
/*   Updated: 2019/01/27 16:34:46 by vmanzoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*first_lst;
	t_list	*new_lst;
	t_list	*current_lst;

	if (!lst || !f)
		return (NULL);
	first_lst = NULL;
	while (lst)
	{
		new_lst = (*f)(lst);
		if (first_lst)
		{
			current_lst->next = new_lst;
			current_lst = current_lst->next;
		}
		else
		{
			first_lst = new_lst;
			current_lst = first_lst;
		}
		lst = lst->next;
	}
	return (first_lst);
}
