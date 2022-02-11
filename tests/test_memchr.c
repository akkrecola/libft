/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:39:29 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/27 18:45:50 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*s;
	void	*result;

	s = ft_strnewi("Search this string for this capital G, please.");
	result = ft_memchr(s, 'G', strlen(s));
	ft_putstr("Character found: ");
	ft_putchar(*((char *) result));

	return (0);
}
