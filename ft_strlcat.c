/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:11:41 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/15 22:07:41 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(dst) + ft_strlen(src);
	while (*dst != '\0' && size > 0)
		dst++;
	i = 0;
	while (i++ < size && *src != '\0')
		*(dst++) = *(src++);
	if (i == size && *src != '\0')
		len = size;
	else
		*dst = '\0';
	return (len);
}
