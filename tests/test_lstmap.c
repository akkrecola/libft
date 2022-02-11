/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 23:07:34 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/22 18:28:38 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

t_list	*kindify(t_list *elem)
{
	size_t	new_size;
	char	*please;

	new_size = ft_strlen(", please.") + ft_strlen((const char *)elem->content);
	please = ft_strnew(new_size);
	free(elem->content);
	elem->content_size = (new_size + 1);
	elem->content = (char *)please;
	return (elem);
}

int	main(void)
{
	t_list		*l1;
	t_list		*l2;
	t_list		*l3;
	const char	*content = "Persepone";
	t_list		*newlist_head;

	l1 = ft_lstnew(content, ft_strlen(content));
	l2 = ft_lstnew(content, ft_strlen(content));
	l3 = ft_lstnew(content, ft_strlen(content));

	ft_lstadd(&l3, l2);
	ft_lstadd(&l2, l1);

	newlist_head = ft_lstmap(l1, kindify);
	assert(l1 != newlist_head);
	return (0);
}

