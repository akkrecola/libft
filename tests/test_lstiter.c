/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 19:49:34 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/20 20:54:33 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#define CSIZE 10

void	leet(t_list *list)
{
	const char	*leet;

	leet = "1337";
	ft_strcpy(list->content, leet);
}

int		main(void)
{
	t_list	*l1;
	t_list	*l2;
	t_list	*l3;
	char	*content;

	content = "XXXX";
	l1 = ft_lstnew(content, CSIZE);
	l2 = ft_lstnew(content, CSIZE);
	l3 = ft_lstnew(content, CSIZE);

	ft_lstadd(&l3, l2);
	ft_lstadd(&l2, l1);

	ft_lstiter(l1, ft_putlstnl);
	ft_lstiter(l1, leet);
	ft_lstiter(l1, ft_putlstnl);
}
