/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:50:28 by elehtora          #+#    #+#             */
/*   Updated: 2021/11/03 18:15:02 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	 main(int argc, char **argv)
{
	char c;

	if (argc != 2)
		return (-1);

	c = argv[1][0];
	if (ft_isalnum(c) == 1)
		printf("Input %c alphanumeric:\tTRUE", c);
	if (ft_isalnum(c) == 0)
		printf("Input %c alphanumeric\tFALSE", c);
	return (0);
}
