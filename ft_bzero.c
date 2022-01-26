/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:12:11 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/24 13:53:36 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/* Zeroes a memory area. Deprecated according to man, use ft_memset. */

void	ft_bzero(void *s, size_t n)
{
	while (n-- > 0)
		((char *) s)[n] = '\0';
}
