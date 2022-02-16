/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbrnl.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:04:18 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/27 18:11:33 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	main()
{
	ft_putnbrnl(+123);
	ft_putnbrnl(-42);
	ft_putnbrnl(42);
	ft_putnbrnl(0);
	ft_putnbrnl(INT_MIN);
	ft_putnbrnl(INT_MAX);

	return (0);
}
