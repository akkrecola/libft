/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 13:05:55 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/15 16:57:59 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	main(void)
{
	size_t	n;
	size_t	i;
	void	*s1;
	void	*s2;

	n = 3;
	i = n - 1;
	s1 = ft_memalloc(n);
	s2 = ft_memalloc(n);

	ft_alphabetize(s1, n);
	ft_alphabetize(s2, n);
	((char *)s1)[i] = 'x';
	ft_putmemnl(s1, n);
	ft_putmemnl(s2, n);
	ft_putnbrnl(ft_memcmp(s1, s2, n));
	ft_putnbrnl(((char *) s1)[i] - ((char *) s2)[i]);

	ft_memdel(&s1);
	ft_memdel(&s2);
	return (0);
}
