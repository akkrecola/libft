/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:11:45 by elehtora          #+#    #+#             */
/*   Updated: 2021/11/16 18:22:41 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/*
   A NULL-terminating ft_foreach; note that this requires preset non-null 
   values.
 */

void	ft_foreach(void *item, void (*f)(void *))
{
	while (*item != NULL)
	{
		f(item);
		item++;
	}
}
