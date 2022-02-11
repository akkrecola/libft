/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:45:10 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/19 19:12:15 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#define ARRSIZE 10

int	main(void)
{
	char		*dest;
	const char	*src = "def";
	size_t		n;

	n = ARRSIZE;
	dest = ft_strnew(n);
	ft_putnbr(sizeof(dest));
	ft_memcpy(dest, "abc", 3);
	ft_strcat(dest, src);
	ft_putstrnl(dest);
	ft_memdel((void **)(&dest));

	return (0);
}
