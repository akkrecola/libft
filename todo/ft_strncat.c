/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:34:38 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/28 17:00:58 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/*
   Strncat explicitly notes that strings can be unterminated, if there's no
   terminator in n bytes of src. This function is alike.
 */

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*tmp;
	size_t	i;

	tmp = dest;
	while (*tmp != '\0')
		tmp++;
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		tmp[i] = src[i];
		i++;
	}
	while (i <= n)
		tmp[i++] = '\0';
	return (dest);
}
