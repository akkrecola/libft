/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:29:31 by elehtora          #+#    #+#             */
/*   Updated: 2021/11/27 02:47:59 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/* Prints only the sign, need to debug. Implementing putnbr for that. */

char	*ft_itoa(int n)
{
	char		*str;
	short int	sign;
	short int	digs;

	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n *= -1;
	}
	digs = ft_dgtcnt(n) + sign;
	str = ft_strnew((size_t) digs);
	while (n > 9)
	{
		digs--;
		str[digs] = (n % 10) + '0';
		n = (n - n % 10) / 10;
	}
	str[digs - 1] = n + '0';
	if (sign == 1)
		str[0] = '-';
	return (str);
}
