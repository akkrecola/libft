/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnequ.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 02:03:52 by elehtora          #+#    #+#             */
/*   Updated: 2021/12/25 02:07:17 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		ft_putstr("ERROR: Input string 1, string 2 and char count to go through.\n");
		return (-1);
	}
	ft_putnbr(ft_strnequ(argv[1], argv[2], ft_atoi(argv[3])));
	return (0);
}
