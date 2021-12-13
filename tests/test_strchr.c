/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:38:16 by elehtora          #+#    #+#             */
/*   Updated: 2021/11/27 13:04:02 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	char	*str;
	char	c;

	if (argc != 3)
		return (-1);
	str = argv[1];
	c = *(argv[2]);
	ft_putstr(str);
	// ft_putchar('\n');
	ft_putchar(c);
	ft_putstr("Result: ");
	ft_putchar(*(ft_strchr(argv[1], ft_atoi(argv[2]))));
	// printf("Result: %s", ft_strchr(argv[1], ft_atoi(argv[2])));
	return (0);
}
