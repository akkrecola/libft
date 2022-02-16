/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:38:13 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/05 07:43:18 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	isdigit(int n)
{
	if (-9 <= n && n <= 9)
		return (1);
	else
		return (0);
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	ln;

	ln = (long int) n;
	if (!isdigit(ln))
		ft_putnbr_fd((ln - (ln % 10)) / 10, fd);
	else if (ln < 0)
		write(fd, "-", 1);
	if (ln < 0)
		ln *= (-1);
	ln = ln % 10 + '0';
	write(fd, &ln, 1);
}
