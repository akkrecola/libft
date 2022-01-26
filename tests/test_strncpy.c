/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 11:27:04 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/08 11:41:17 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char		*dest;
	const char	*src;

	dest = ft_strnew(20);
	src = "semmosta";
	ft_strncpy(dest, src, 6);
	ft_putstr(dest);
	return (0);
}
