/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:50:28 by elehtora          #+#    #+#             */
/*   Updated: 2021/11/03 17:57:10 by elehtora         ###   ########.fr       */
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
	if (ft_isdigit(c) == 1)
		printf("Input %c digit:\tTRUE", c);
	if (ft_isdigit(c) == 0)
		printf("Input %c digit\tFALSE", c);
	return (0);
}
