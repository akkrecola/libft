/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 22:14:48 by elehtora          #+#    #+#             */
/*   Updated: 2021/11/23 23:22:23 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int		ft_atoi(const char *nptr);

int		main(int argc, char **argv)
{
	int	i;
	if (argc != 2)
		return (-1);
	printf("Argument as a string: %s\n", argv[1]);
	i = ft_atoi(argv[1]);
	printf("Argument as an integer: %d\n", i);
	return (0);
}
