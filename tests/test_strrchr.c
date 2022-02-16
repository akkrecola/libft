/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 06:33:15 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/08 06:55:17 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putstr("ERROR: Input a string and a char to inversely searched.\n");
		return (-1);
	}
	if (ft_strrchr(argv[1], *(argv[2])) == NULL)
		ft_putstr("Function returned NULL.\n");
	else
		ft_putstr(ft_strrchr(argv[1], *(argv[2])));
	return (0);
}
