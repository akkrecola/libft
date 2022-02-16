/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strequ.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 04:21:09 by elehtora          #+#    #+#             */
/*   Updated: 2021/12/24 04:27:10 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putstr("ERROR: Input two strings as parameters.");
		return (-1);
	}
	ft_putnbr(ft_strequ(argv[1], argv[2]));
	return (0);
}
