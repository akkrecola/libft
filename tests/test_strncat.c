/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:45:10 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/20 19:34:34 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#define DESTSIZE 2

int	main(void)
{
	char		*dest;
	const char	*src = "def";
	size_t		n;

	n = DESTSIZE;
	dest = ft_strnew(n);
	ft_memcpy(dest, "abc", 3);
	ft_strncat(dest, src, n);
	ft_putstrnl(dest);
	ft_strdel(&dest);
	if (dest != NULL)
		ft_putstrnl("Dest not freed.");
	else
		ft_putstrnl("Dest freed.");

	return (0);
}
