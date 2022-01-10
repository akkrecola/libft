/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:38:16 by elehtora          #+#    #+#             */
/*   Updated: 2021/12/25 03:36:27 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	main(int argc, char **argv)
{
	char	c;
	char	*result;

	if (argc != 3)
	{
		ft_putstr("ERROR: Input a string and a char to be searched.\n");
		return (-1);
	}
	c = (char) argv[2][0];
	result = ft_strchr(argv[1], c);
	if (result != NULL)
		ft_putstr(result);
	else
		ft_putstr("No match was found.\n");
	return (0);
}
