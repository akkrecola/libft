/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:58:49 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/20 21:32:54 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static const char	*set_sign(const char *str, short int *sign)
{
	if ((*str == '+' || *str == '-') && ft_isdigit(*(str + 1)))
	{
		if (*str == '-')
			*sign = -1;
		str += 1;
	}
	return (str);
}

int	ft_atoi(const char *str)
{
	short int	sign;
	int			digit;
	long int	result;

	str = skip_whitespace(str);
	sign = 1;
	str = set_sign(str, &sign);
	result = 0;
	while (ft_isdigit(*str))
	{
		digit = *(str++) - '0';
		result = result * 10 + digit;
	}
	result *= sign;
	if (result < INT_MIN)
		return (0);
	if (result > INT_MAX)
		return (-1);
	return ((int) result);
}
