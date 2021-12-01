/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:47:41 by elehtora          #+#    #+#             */
/*   Updated: 2021/12/01 03:49:31 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

/* Nulls only the pointer to pointer, no the initial pointer. */

void	ft_memdel(void **ap)
{
	free(*ap); // check the dereference depth
	*ap = NULL;
}
