/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:45:10 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/05 07:45:39 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#define ARRSIZE 10

int	main(void)
{
	char		dest[ARRSIZE];
	const char	*src = "def";
	size_t		n;

//	n = ARRSIZE;
//	dest = ft_strnew(n);
	ft_putnbrnl(sizeof(dest));
	ft_memcpy(dest, "abc", 3);
	n = ft_strlcat(dest, src, sizeof(dest));
	ft_putstrnl(dest);
	ft_putnbrnl(n);
//	ft_strdel(&dest);

	return (0);
}
