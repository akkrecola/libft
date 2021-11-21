/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:31:06 by elehtora          #+#    #+#             */
/*   Updated: 2021/11/16 21:41:13 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
   Allocates and returns a fresh memory area. Memory allocated is initialized
to 0. Return NULL on allocation failure.
 */

void	*ft_memalloc(size_t size)
{
	void	*area;
	int		i;

	area = malloc(size);
	if (area == NULL)
		return (NULL);
	ft_bzero(&area, size);
//	i = -1;
//	while (++i < size)
//		area[i] = '\0';
	return (area);
}
