/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:40:43 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/17 06:09:35 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** Copies from source to destination for n bytes or until c is found in source.
** Returns a pointer to the following byte of c if c is found, NULL otherwise.
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
