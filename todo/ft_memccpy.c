/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:40:43 by elehtora          #+#    #+#             */
/*   Updated: 2021/11/16 19:20:06 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	while (n > 0 && *src != '\0')
	{
		if (*src == c)
			return (src);
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (NULL);
}
