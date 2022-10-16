/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:13:14 by elehtora          #+#    #+#             */
/*   Updated: 2022/10/16 19:50:34 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_string.h"

int	ft_putchar_fd(int c, int fd)
{
	if (write(fd, &c, 1) == -1)
		return (EOF);
	return (c);
}
