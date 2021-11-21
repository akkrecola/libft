/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:58:49 by elehtora          #+#    #+#             */
/*   Updated: 2021/11/11 16:37:03 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
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

static void	skip_whitespace(const char *str)
{
	while (is_whitespace(*str))
		str++;
}

static void	set_sign(const char *nptr, int *sign)
{
	if ((*nptr == '+' || *nptr == '-') && is_digit(*(nptr + 1)))
	{
		if (*nptr == '-')
			*sign *= -1;
	}
	else
		*sign = 0;
}

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	digit;
	int	collector;

	ft_putstr("Breakpoint A\n");
	skip_whitespace(nptr);
	ft_putstr("Breakpoint B\n");
	set_sign(nptr, &sign);
	ft_putstr("Breakpoint C\n");
	if (!sign)
		return (0);
	nptr++;
	collector = 0;
	while (is_digit(*nptr))
	{
		digit = *nptr - '0';
		collector = collector * 10 + digit;
		nptr++;
	}
	return (collector);
}
