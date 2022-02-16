/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 13:21:09 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/16 16:28:40 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	main(void)
{
	t_list	*list;
	void	*content;
	size_t	content_size;

	content_size = 10;
	content = ft_memalloc(content_size);
	ft_alphabetize(content, content_size);
	ft_putstr("Content alphabetized, content: ");
	ft_putmemnl(content, content_size);	
	ft_putstrnl("Creating list...");
	list = ft_lstnew(content, content_size);
	if (list == NULL)
	{
		ft_putstrnl("List allocation failed, terminating execution.");
		return (-1);
	}
	ft_putstrnl("List created.");
	ft_putstr("List content: ");
	ft_putmemnl(list->content, list->content_size);
	ft_putstrnl("Deleting list node...");
	ft_lstdelone(&list, ft_del);
	if (list == NULL)
		ft_putstrnl("List node deleted.");
	else
		ft_putstrnl("Node deletion failed.");
	return (0);
}
