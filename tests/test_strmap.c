/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 07:24:35 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/08 07:42:33 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_toupper_char(char c)
{
	if (ft_isalpha((int) c))
		return (c - ('a' - 'A'));
	else
		return (c);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_putstr("ERROR: Input a string to be mapped.\n");
		return (-1);
	}
	ft_putstr(ft_strmap(argv[1], ft_toupper_char));
	return (0);
}
