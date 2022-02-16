/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:45:10 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/28 16:31:50 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#define DESTSIZE 2

int	main(int argc, char **argv)
{
	char		*dest;
	const char	*src;
	size_t		n;

	if (argc != 4)
	{
		ft_putendl("Input: dest and src strings to concatenate, n chars to cat.");
		return (-1);
	}

	n = ft_atoi(argv[3]);
	dest = ft_strnewi(argv[1]);
	src = argv[2];
	ft_strncat(dest, src, n);
	ft_putstrnl(dest);
	ft_strdel(&dest);
	if (dest != NULL)
		ft_putstrnl("Dest not freed.");
	else
		ft_putstrnl("Dest freed.");

	return (0);
}
