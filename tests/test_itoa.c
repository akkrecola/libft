/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 04:39:38 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/11 17:07:31 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>
#include <string.h>

int	main(void)
{
/*
**	ft_putendl(ft_itoa(123));
**	ft_putendl(ft_itoa(-123));
**	ft_putendl(ft_itoa(0));
**	ft_putendl(ft_itoa(0001));
*/

	assert(ft_strequ(ft_itoa(INT_MAX), "2147483647"));
	assert(ft_strequ(ft_itoa(INT_MIN), "-2147483648"));
	assert(ft_strequ(ft_itoa(123), "123"));
	assert(ft_strequ(ft_itoa(-123), "-123"));
	assert(ft_strequ(ft_itoa(0), "0"));
	assert(ft_strequ(ft_itoa(-0), "0"));
	assert(ft_strequ(ft_itoa(-0), "0"));
	assert(ft_strequ(ft_itoa(-0), "0"));
	assert(ft_strequ(ft_itoa(9876), "9876"));
	assert(ft_strequ(ft_itoa(-9876), "-9876"));

	ft_putendl("itoa() OK!");
	return (0);
}
