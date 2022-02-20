/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:11:41 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/20 20:03:42 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*get_tail(char *s, size_t dstsize)
{
	while (*s && dstsize)
	{
		s++;
		dstsize--;
	}
	if (!dstsize)
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
	ft_strlcpy(dst, src, (dstsize - dstlen));
	return (dstlen + srclen);
}
