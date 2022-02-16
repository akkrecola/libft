/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnewi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:43:26 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/24 18:50:31 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/* Strnewi allocates of memory for a string (literal) s. The resulting string is
   null terminated. The string is initialized by copy.

   In case the input is an empty string, the null byte is
   allocated and returned.

   If allocation fails or s is NULL, strnewi returns NULL.
*/

char	*ft_strnewi(const char *s)
{
	char	*new;
	size_t	n;

	if (!s)
		return (NULL);
	n = ft_strlen(s);
	new = ft_memalloc(n + 1);
	if (!new)
		return (NULL);
	ft_strcpy(new, s);
	return (new);
}
