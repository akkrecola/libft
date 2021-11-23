/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:58:49 by elehtora          #+#    #+#             */
/*   Updated: 2021/11/23 23:38:48 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_digit(char c)
{
	c -= '0';
	if (0 <= c && c <= 9)
		return (1);
	else
		return (0);
}

static int	is_whitespace(char c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}

static const char	*skip_whitespace(const char *str)
{
	while (is_whitespace(*str))
		str++;
	return (str);
}

static const char	*set_sign(const char *nptr, int *sign)
{
	if ((*nptr == '+' || *nptr == '-') && is_digit(*(nptr + 1)))
	{
		if (*nptr == '-')
			*sign = -1;
		nptr++;
	}
	return (nptr);
}

/*
Integer overflow or underflow isn't handled on the actual atoi, therefore
they're not handled here either. Atoi has a non-documented return of -1 when
the count of digits passes 19, so this behaviour is implemented.
*/

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	digit;
	int	collector;
	int	i;

	nptr = skip_whitespace(nptr);
	sign = 1;
	nptr = set_sign(nptr, &sign);
	if (!sign)
		return (0);
	collector = 0;
	i = 0;
	while (is_digit(nptr[i]))
	{
		if (i > 18)
			return (-1);
		digit = nptr[i] - '0';
		collector = collector * 10 + digit;
		i++;
	}
	return (sign * collector);
}
