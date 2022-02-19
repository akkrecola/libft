/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:58:49 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/19 16:48:21 by elehtora         ###   ########.fr       */
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

static const char	*set_sign(const char *str, int *sign)
{
	if ((*str == '+' || *str == '-') && is_digit(*(str + 1)))
	{
		if (*str == '-')
			*sign = -1;
		str++;
	}
	return (str);
}

int	ft_atoi(const char *str)
{
	int	sign;
	int	digit;
	int	collector;
	int	i;

	str = skip_whitespace(str);
	sign = 1;
	str = set_sign(str, &sign);
	if (!sign)
		return (0);
	collector = 0;
	i = 0;
	while (is_digit(str[i]))
	{
		if (i > 18)
			return (-1);
		digit = str[i] - '0';
		collector = collector * 10 + digit;
		i++;
	}
	return (sign * collector);
}
