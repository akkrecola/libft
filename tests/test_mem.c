/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memalloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 04:01:23 by elehtora          #+#    #+#             */
/*   Updated: 2021/12/13 23:33:42 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/*
   Testing memalloc, memdel, memmove, memchr, memcpy, memset
TODO: memmove, memchr, memcpy
 */

int	main(int argc, char **argv)
{
	char	*str;
	size_t	size;

	if (argc < 3)
	{
		ft_putstr("Too few arguments. (Usage: length of string, string)");
		return (-1);
	}
	if (argc > 3)
	{
		ft_putstr("Too many arguments. (Usage: length of string, string)");
		return (-1);
	}

	size = (size_t)ft_atoi(argv[1]);
	str = (char *)ft_memalloc(size);
	ft_memset(str, 'a', size);
	ft_putstr("\nMemory area set, size of: ");
	ft_putnbr(size);
	ft_putstr("\nString: ");
	ft_putstr(str);
	ft_strclr(str);
	ft_putstr("\nString cleared.");
	ft_memdel((void **)&str);
	ft_putstr("\nMemory area deleted.");
	//ft_putstr(str);
	//ft_putstr(NULL);
	return (0);
}

