/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:00:08 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/12 14:33:50 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	void	*dest;
	void	*src;
	size_t	n;
	int		c_search;

	n = 10;
	c_search = 'h';
	src = ft_memalloc(n);
	ft_putstrnl("Allocated memory for source.");
	dest = ft_memalloc(n);
	ft_putstrnl("Allocated memory for destination.");

	ft_alphabetize(src, n);
	ft_putstrnl("Memory set to constant byte X.");
	ft_putstrnl("Memory values at source:");
	ft_putmemnl(src, n);
	void	*result = ft_memccpy(dest, src, c_search, n);
	if (result != NULL)
		ft_putstrnl("Memory area copied, returned dest + 1.");
	else
		ft_putstrnl("Memory area copied, returned NULL (full n copied)");
	ft_putmemnl(dest, n);

	ft_memdel(&src);
	ft_memdel(&dest);
	ft_putstrnl("Wiped memory from source and destination.");

	return (0);
}
