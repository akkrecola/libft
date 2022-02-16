/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:47:41 by elehtora          #+#    #+#             */
/*   Updated: 2021/12/01 03:52:55 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

/* Frees the memory (area) pointed to by ap, then 'forgets'
   the initial pointer by setting it to NULL. */

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}
