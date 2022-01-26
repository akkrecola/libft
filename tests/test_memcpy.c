/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 14:44:15 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/13 02:01:57 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	main(void)
{
	size_t		n;
	const void	*src;
	void		*dest;

	n = 10;
	src = ft_memalloc(n);
	dest = ft_memalloc(n);
	ft_alphabetize((void *)src, n);
	ft_putstr("Memory at source:\t");
	ft_putmemnl((char *)src, n);
	if (*(char *)dest != 0)
		ft_putstrnl("Something fishy with dest!");
	else
		ft_putmemnl((char *)dest, n);
	ft_memcpy(dest, src, n);
	ft_putstr("Memory at destination post copy: ");
	ft_putmemnl((char *)dest, n);
	return (0);
}
