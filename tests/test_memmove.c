/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 12:18:30 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/15 12:52:28 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	void	*src;
	void	*dest;
	size_t		n;

	n = 10;
	src = ft_memalloc(n);
	dest = ft_memalloc(n);
	ft_alphabetize(src, n);
	ft_putstr("Data in source: ");
	ft_putmemnl(src, n);
	if (*(char *)dest == 0)
		ft_putstrnl("Destination status before memmove: zeroed.");
	else
	{
		ft_putstrnl("Destination status not zeroed, terminating execution.");
		return (-1);
	}
	ft_memmove(dest, src, n);
	ft_putstr("Destination data after memmove: ");
	ft_putmemnl(dest, n);
	return (0);
}
