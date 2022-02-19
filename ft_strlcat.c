/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:11:41 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/19 15:29:13 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_tail(char *s, size_t dstsize)
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

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	dst = get_tail(dst, dstsize);
	if (!dst)
		return (srclen + dstsize);
	ft_strncpy(dst, src, (dstsize - dstlen - 1));
	dst[dstsize - dstlen - 1] = '\0';
	return (dstlen + srclen);
}
