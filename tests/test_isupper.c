/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:32:20 by elehtora          #+#    #+#             */
/*   Updated: 2021/11/03 16:58:55 by elehtora         ###   ########.fr       */
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
	if (ft_isupper(c) == 1)
		printf("Input %c uppercase:\tTRUE", c);
	if (ft_isupper(c) == 0)
		printf("Input %c uppercase\tFALSE", c);
	return (0);
}
