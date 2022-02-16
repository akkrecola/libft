/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 17:56:43 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/23 03:42:40 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

static void	ft_delel(void *content, size_t content_size)
{
	ft_bzero(content, content_size);
	free(content);
	content = NULL;
}


int	main(void)
{
	void	*s1;
	void	*s2;
	t_list	*tail;
	t_list	*head;

	ft_putstr("Testing ft_lstdel.c...\t");
	s1 = "Asstits";
	s2 = "Fuckcock";

	head = ft_lstnew(s1, ft_strlen(s1));
	tail = ft_lstnew(s2, ft_strlen(s2));

//	ft_putstrnl("Links created.");
	ft_lstadd(&tail, head);
//	if (tail->next == NULL)
//		ft_putstrnl("Tail's *next is NULL.");
//	ft_putstrnl("Links added.");
//	ft_putstrnl("Initial content:");
//	ft_putstr("head content: ");
	ft_putmemnl(head->content, ft_strlen(s1));
//	ft_putstr("tail content: ");
	ft_putmemnl(tail->content, ft_strlen(s2));
	ft_lstdel(&head, ft_delel);
	assert(head == NULL);
//	assert(tail == NULL);
//	ft_putstrnl("List deleted.");
//	if (tail == NULL)
//		ft_putstrnl("Old link deleted successfully.");
//	else
//		printf("Pointer tail: %p\n", tail);
//	if (head == NULL)
//		ft_putstrnl("head deleted successfully. (head = NULL)");
//	else
//		printf("Pointer head: %p\n", head);
//	ft_putstrnl("Content after deletion (should be gibberish):");
//	ft_putstrnl("Tail pointer NULL");
//	ft_putmemnl(tail->content, content_size);

	ft_putstrnl("OK!");
	return (0);
}
