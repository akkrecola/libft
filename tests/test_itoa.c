/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 04:39:38 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/24 12:56:10 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int	tostr;

	tostr = MIN_INT + 1;
	ft_putstrnl(ft_itoa(tostr));
	/*
	if (argc != 2)
	{
		ft_putstrnl("ERROR: Input an integer value.");
		return (-1);
	}
	*/
	// ft_putstrnl(ft_itoa(ft_atoi(argv[1])));
	return (0);
}
