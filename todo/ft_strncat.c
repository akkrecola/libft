/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:34:38 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/27 19:00:05 by elehtora         ###   ########.fr       */
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

	tmp = dest;
	while (*tmp != '\0')
		tmp++;
	ft_strncpy(tmp, src, n);
	return (dest);
}
