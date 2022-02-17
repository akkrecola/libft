/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 12:29:47 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/17 01:19:15 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Zeroes and frees the memory of the content of a t_list element.
*/

void	ft_del(void *content, size_t content_size)
{
	ft_bzero(content, content_size);
	free(content);
}
