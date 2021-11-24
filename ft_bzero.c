/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 17:12:11 by elehtora          #+#    #+#             */
/*   Updated: 2021/11/24 05:11:43 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/* Check the pointer shenanigans - looks sketch. */

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	p = (char *) s;
	while (n > 0)
	{
		*p = '\0';
		p++;
		n--;
	}
}
