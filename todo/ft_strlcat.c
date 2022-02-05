/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 19:11:41 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/05 07:52:37 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen(dst) + ft_strlen(src);
	while (*dst != '\0')
		dst++;
	while (size-- > 0 && *src != '\0')
		*(dst++) = *(src++);
	*dst = '\0';
	return (len);
}
