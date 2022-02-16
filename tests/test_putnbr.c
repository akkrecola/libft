/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:41:29 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/27 18:12:28 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	main()
{
	ft_putnbr(+123);
	ft_putnbr(-42);
	ft_putnbr(42);
	ft_putnbr(0);
	ft_putnbr(INT_MIN);
	ft_putnbr(INT_MAX);

	//printf("%d\n", (-11 % 10));
}
