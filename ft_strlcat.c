/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:11:41 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/17 06:43:12 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_tail(char *s, size_t size)
{
	while (*s != '\0' && size > 0)
	{
		s++;
		size--;
	}
	if (size == 0)
		return (NULL);
	else
		return (s);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	dst = get_tail(dst, size);
	if (!dst)
		return (srclen + size);
	ft_strncpy(dst, src, (size - dstlen - 1));
	dst[size - dstlen - 1] = '\0';
	return (dstlen + srclen);
}
