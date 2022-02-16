/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmemnl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:20:36 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/31 06:05:44 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <unistd.h>

/*
   Outputs n characters of *s memory to stdout. Used on areas that are not
   (properly) null terminated.
*/

void	ft_putmemnl(char *s, size_t n)
{
	if (s == NULL)
	{
		ft_putstrnl("ERROR: putmemnl received NULL pointer.");
		return ;
	}
	write(1, s, n);
	write(1, "\n", 1);
}
