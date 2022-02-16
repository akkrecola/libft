/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:45:10 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/16 04:05:14 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#define DESTSIZE 15

int	main(void)
{
	char		*dest;
	char const *src = "lorem ipsum dolor sit amet";
	size_t		n;
	size_t		srclen;
	size_t		dstlen;


	dest = ft_strnew(DESTSIZE);

//	ft_memcpy(dest, "Laiffi on, mut", strlen("Laiffi on, mut") + 1);
	ft_memset(dest, 0, DESTSIZE);
	ft_memset(dest, 'X', 6);
	dest[10] = 'a';
//	dest[8] = 'X'; //wrench test

	srclen = strlen(src);
	dstlen = strlen(dest);

	ft_putnbrnl(ft_strlen(dest));

	n = ft_strlcat(dest, src, 1);
	if (n == srclen + dstlen)
		ft_putendl("Return values match.");
	if (dest[strlen(dest)] == 0)
		ft_putendl("Dest is null terminated.");

	ft_putmemnl(dest, DESTSIZE);
	ft_putnbrnl(ft_strlen(dest));
	ft_putnbrnl(n);
	ft_strdel(&dest);

	return (0);
}
