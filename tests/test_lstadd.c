/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:56:43 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/17 12:29:57 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	main(void)
{
	void	*old_content;
	void	*new_content;
	size_t	content_size;
	t_list	*oldlink;
	t_list	*newlink;

	content_size = 5;
	old_content = ft_memalloc(content_size);
	new_content = ft_memalloc(content_size + 5);
	ft_alphabetize(new_content, content_size + 5);
	ft_alphabetize(old_content, content_size);
	newlink = ft_lstnew(new_content, content_size + 5);
	oldlink = ft_lstnew(old_content, content_size);

	ft_lstadd(&oldlink, newlink);
	ft_putmemnl(newlink->content, content_size + 5);
//	ft_putnbrnl(newlink->content_size);
	ft_putmemnl(newlink->next->content, content_size);
//	ft_putnbrnl(newlink->next->content_size);
	ft_lstdel(&newlink, ft_del);
	if (oldlink == NULL)
		ft_putstrnl("Old link deleted successfully.");
	if (newlink == NULL)
		ft_putstrnl("New link deleted successfully.");
	// ft_putnbrnl(oldlink->content_size);
	return (0);
}
