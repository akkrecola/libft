/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 04:50:18 by elehtora          #+#    #+#             */
/*   Updated: 2021/12/24 05:11:40 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		ft_putstr("ERROR: Input 2 strings to join.");
		return (-1);
	}
	ft_putstr(ft_strjoin(argv[1], argv[2]));
	return (0);
}
