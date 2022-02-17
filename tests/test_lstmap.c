/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 23:07:34 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/17 05:03:07 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <assert.h>

t_list	*kindify(t_list *elem)
{
	t_list	*new_list;
	char	*please = ", please.";

	new_list = ft_lstnew(ft_strjoin(elem->content, please), elem->content_size + ft_strlen(please));
	return (new_list);
}

void	print_list_contents(t_list *head)
{
	ft_putendl(head->content);
}

int	main(void)
{
	t_list		*oldlist;
	t_list		*newlist;


	oldlist = NULL;
	ft_lstadd(&oldlist, ft_lstnew("Sleep", strlen("Sleep") + 1));
	ft_lstadd(&oldlist, ft_lstnew("Food", strlen("Sleep") + 1));
	ft_lstadd(&oldlist, ft_lstnew("A gallon of coffee", strlen("A gallon of coffee") + 1));

	newlist = ft_lstmap(oldlist, &kindify);

	assert(oldlist != newlist);

	ft_putendl("The initial list:");
	ft_lstiter(oldlist, &print_list_contents);
	ft_putendl("*************");
	ft_putendl("The new list:");
	ft_lstiter(newlist, &print_list_contents);

	return (0);
}

