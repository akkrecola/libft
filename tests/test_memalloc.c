/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memalloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 13:02:20 by elehtora          #+#    #+#             */
/*   Updated: 2021/11/16 21:43:17 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/*
   Testing memalloc, memdel, memmove, memchr, memcpy, memset
 */

int	main(void)
{
	char	*str;
	int		i;
	size_t	size;

	i = 0;
	size = 10;
	str = ft_memalloc(size);
	ft_memset(str, 'a', size - 1);
	ft_putstr(str);
	ft_memdel(&str);
	return (0);
}

