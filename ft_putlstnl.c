/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlstnl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 20:14:03 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/10 16:13:19 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/* Outputs to stdout the content of a list, assuming that the content is
   of type char. */

void	ft_putlstnl(t_list *elem)
{
	if (!elem)
		return ;
	if (elem->content)
		ft_putstrnl(elem->content);
	else
		ft_putstrnl("List content null.");
}
