/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 07:54:32 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/08 09:31:30 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

void	alternate(unsigned int i, char *str)
{
	if (i % 2)
		str[i] = toupper(str[i]);
	else
		str[i] = tolower(str[i]);
}

int		main(int argc, char **argv)
{
	char	*str;

	str = argv[1];
	if (argc != 2)
	{
		ft_putstr("ERROR: Input a string.\n");
		return (-1);
	}
	ft_putstr("String initially:\n");
	ft_putstr(str);
	ft_striteri(str, alternate);
	ft_putstr("\nString after iteration:\n");
	ft_putstr(str);
	ft_putchar('\n');
	return (0);
}
