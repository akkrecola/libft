/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 07:24:35 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/08 10:23:58 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

char	alternate(unsigned int i, char c)
{
	if (i % 2)
		return (toupper(c));
	else
		return (tolower(c));
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("ERROR: Input a string to be mapped.\n");
		return (-1);
	}
	ft_putstr(ft_strmapi(argv[1], alternate));
	return (0);
}
