/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 02:47:52 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/22 18:29:23 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list			*newlink;
	t_list			*prev;
	t_list			*head;

	prev = NULL;
	head = NULL;
	while (lst != NULL)
	{
		newlink = ft_lstnew(0, 0);
		if (newlink == NULL)
			return (NULL);
		newlink = f(lst);
		if (prev != NULL)
			prev->next = newlink;
		if (head == NULL)
			head = newlink;
		prev = newlink;
		lst = lst->next;
	}
	return (head);
}
