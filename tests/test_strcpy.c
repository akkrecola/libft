/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 05:22:32 by elehtora          #+#    #+#             */
/*   Updated: 2021/12/24 05:40:04 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	char	*dest;

	if (argc != 2)
	{
		ft_putstr("ERROR: Input 1 string to copy.");
		return (-1);
	}
	dest = ft_strnew(ft_strlen(argv[1]) + 1);
	ft_putnbr(ft_strlen(argv[1]) + 1);
	ft_putstr(ft_strcpy(dest, argv[1]));
	return (0);
}
