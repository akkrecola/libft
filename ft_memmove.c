/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:56:25 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/15 12:41:01 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*temp;

	temp = ft_memalloc(n);
	ft_memcpy(temp, src, n);
	ft_memcpy(dest, temp, n);
	ft_memdel(&temp);
	return (dest);
}
