/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 00:10:23 by elehtora          #+#    #+#             */
/*   Updated: 2021/12/25 01:42:08 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		ft_putstr("ERROR: Input string, substring start index and length.\n");
		return (-1);
	}
	ft_putstr(ft_strsub(argv[1], ft_atoi(argv[2]), ft_atoi(argv[3])));
	return (0);
}
