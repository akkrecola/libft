/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:38:13 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/27 17:59:37 by elehtora         ###   ########.fr       */
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

void	ft_putnbr(int n)
{
	long int	ln;

	ln = (long int) n;
	if (!isdigit(ln))
		ft_putnbr((ln - (ln % 10)) / 10);
	else if (ln < 0)
		write(1, "-", 1);
	if (ln < 0)
		ln *= (-1);
	ln = ln % 10 + '0';
	write(1, &ln, 1);
}
