/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_fd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 15:36:01 by elehtora          #+#    #+#             */
/*   Updated: 2021/12/13 19:00:38 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(int argc, char **argv)
{
	int		fd;
	char	c;
	char	*s;

	ft_putstr("Params: File descriptor, string");
	if (argc < 3)
	{
		ft_putstr("Too few arguments.");
		return -1;
	}
	if (argc > 3)
	{
		ft_putstr("Too many arguments.");
		return -1;
	}
	fd = ft_atoi(argv[1]);
	s = argv[2];
	c = s[0];
	ft_putchar_fd(c, fd);
	ft_putendl_fd(s, fd);
	ft_putstr_fd(s, fd);
	ft_putnbr_fd(ft_atoi(s), fd);
	return (0);
}
