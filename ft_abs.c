/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 17:04:49 by elehtora          #+#    #+#             */
/*   Updated: 2022/09/24 19:38:19 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Gets the absolute value of given datatypes.
int	ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

double	ft_fabs(double x)
{
	if (x < 0.0)
		return (-x);
	return (x);
}

long double	ft_fabs(long double x)
{
	if (x < 0.0L)
		return (-x);
	return (x);
}

long	ft_fabs(long x)
{
	if (x < 0L)
		return (-x);
	return (x);
}

long long	ft_fabs(long long x)
{
	if (x < 0LL)
		return (-x);
	return (x);
}
