/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmemnl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:20:36 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/19 00:50:24 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/*
   Outputs n characters of *s memory to stdout.
*/

void	ft_putmemnl(char *s, size_t n)
{
	if (s == NULL)
	{
		ft_putstrnl("ERROR: putmemnl received NULL pointer.");
		return ;
	}
	while (n-- > 0)
	{
		ft_putchar(*s);
		s++;
	}
	ft_putchar('\n');
}
