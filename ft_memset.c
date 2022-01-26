/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:03:39 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/24 13:54:28 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/* Sets a maximum of n bytes from memory area s to constant byte c. */

void	*ft_memset(void *s, int c, size_t n)
{
	while (n-- > 0)
		((char *)s)[n] = c;
	return (s);
}
