/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:23:24 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/15 21:50:18 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>
#define LSTSIZE 4
/*
static void	print(t_list *elem)
{
	size_t	*toprint;

	toprint = elem->content;
	ft_putnbrnl((size_t) *toprint);
}


int	main()
{
	t_list	**alst;
	size_t	i;
	t_list	*head;

	alst = (t_list **) malloc(sizeof(t_list *) * LSTSIZE + 1);
	alst[LSTSIZE] = NULL;

	i = 0;
	while (i < LSTSIZE)
	{
		alst[i] = ft_lstnew(&i, sizeof(i));
		i++;
	}

	i = 0;
	while (i < LSTSIZE)
	{
		ft_lstadd(&(alst[i]), alst[i + 1]);
		i++;
	}
	head = alst[i - 1];
	
	ft_lstiter(head, print);
	
}
*/

int	main()
{
	t_list	**alst;
	t_list	*l1 = ft_lstnew("1", 1);
	t_list	*l2 = ft_lstnew("2", 1);
	t_list	*l3 = ft_lstnew("3", 1);
	t_list	*l4 = ft_lstnew("4", 1);
	t_list	*head;

	alst = (t_list **) malloc(sizeof(t_list *) * LSTSIZE);
	ft_lstadd(alst, l1);
	ft_lstadd(alst, l2);
	ft_lstadd(alst, l3);
	ft_lstadd(alst, l4);

	head = l4;
	while (head != NULL)
	{
		ft_putendl("XOXO");
		ft_putcharnl(*((char *)(head->content)));
		head = head->next;
	}
}
