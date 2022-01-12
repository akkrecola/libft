/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:40:43 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/12 14:23:47 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
   Copies from source to destination for n bytes or until c is found in 
   source.
 */

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n-- > 0)
	{
		*((char *)dest) = *((char *)src);
		if ((*(char *)src) == c)
			return (dest + 1);
		dest++;
		src++;
	}
	return (NULL);
}
