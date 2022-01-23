/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:38:13 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/23 16:34:39 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	isdigit(int c)
{
	if (-9 <= c && c <= 9)
		return (1);
	else
		return (0);
}
void		ft_putnbr(int n)
{
	if (!isdigit(n))
		ft_putnbr((n - (n % 10)) / 10);
	else if (n < 0)
		write(1, "-", 1);
	if (n < 0)
		n *= (-1);
	n = n % 10 + '0';
	write(1, &n, 1);
}
