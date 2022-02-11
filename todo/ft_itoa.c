/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:29:31 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/11 13:52:39 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Doesn't handle INT_MIN (iteration done with positive) */

char	*ft_itoa(int n)
{
	char		*str;
	short int	sign;
	short int	digs;
	long int	ln;

	sign = 0;
	ln = (long int) n;
	if (ln < 0)
	{
		sign = 1;
		ln *= -1;
	}
	digs = ft_dgtcnt(ln) + sign;
	str = ft_strnew((size_t) digs);
	while (ln > 9)
	{
		digs--;
		str[digs] = (ln % 10) + '0';
		ln = (ln - ln % 10) / 10;
	}
	str[digs - 1] = ln + '0';
	if (sign == 1)
		str[0] = '-';
	return (str);
}
