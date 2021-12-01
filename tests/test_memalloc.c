/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memalloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:02:20 by elehtora          #+#    #+#             */
/*   Updated: 2021/12/01 03:57:29 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/*
   Testing memalloc, memdel, memmove, memchr, memcpy, memset
TODO: memmove, memchr, memcpy
 */

int	main(void)
{
	char	*str;
	size_t	size;

	size = 10;
	str = (char *)ft_memalloc(size);
	ft_memset(str, 'a', size);
	ft_putstr(str);
	ft_putnbr(ft_strlen(str));
	ft_memdel((void **)&str);
	ft_putstr(str);
	ft_putstr(NULL);
	return (0);
}

