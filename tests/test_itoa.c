/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 04:39:38 by elehtora          #+#    #+#             */
/*   Updated: 2021/11/27 02:54:39 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (-1);


	ft_putstr(ft_itoa(ft_atoi(argv[1])));
	ft_putstr(ft_itoa(ft_atoi(argv[2])));
	ft_putstr(ft_itoa(ft_atoi(argv[3])));
}
