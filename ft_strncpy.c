/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 11:18:22 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/19 16:55:24 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	srclen;

	srclen = ft_strlen(src);
	if (srclen < len)
	{
		ft_strcpy(dst, src);
		ft_memset(dst + srclen, '\0', len - srclen);
	}
	else
	{
		while (len-- > 0)
			*(dst++) = *(src++);
	}
	return (dst);
}
