/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:08:00 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/16 18:27:11 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/*
   Rudimentary memory reallocation function. Takes as parameters (1) the area
   returned by initial malloc call, and (2) the size of new (re)allocated area.
   Reallocation causes the memory, i.e. renders persistent pointers
   to the previous area useless/harmful.

   Since the size of a void *area can't be determined inside the function,
   to use ft_realloc one needs to save the area size in the caller function
   (like content_size in list functions).
 */
void	*ft_realloc(void *area, size_t old_size, size_t new_size)
{
	void	*new;

	new = ft_memalloc(new_size);
	ft_memcpy(new, area, old_size);
	ft_memdel(&area);
	return (new);
}
