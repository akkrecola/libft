/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_dgtcnt.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 02:54:22 by elehtora          #+#    #+#             */
/*   Updated: 2021/11/24 03:08:41 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	nb;

	if (argc == 1)
		ft_putstr("Please input an integer value.");
	if (argc > 2)
		ft_putstr("Too many arguments; use only one.");
	nb = ft_atoi(argv[1]);
	printf("Input %d has %d digits.\n", nb, ft_dgtcnt(nb));

	return (0);
}

