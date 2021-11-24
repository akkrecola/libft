/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:03:39 by elehtora          #+#    #+#             */
/*   Updated: 2021/11/24 05:15:55 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/* Check the pointer cast and integer byte width compitability */

void	*ft_memset(void *s, int c, size_t n)
{
	int	*p;

	p = (int *) s;
	while (n > 0)
	{
		*p = c;
		p++;
		n--;
	}
	return (s);
}
