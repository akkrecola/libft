/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 12:55:27 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/08 13:05:54 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>

void	imitate(char *s)
{
	if (*s % 2)
		*s = toupper(*s);
	else
		*s = tolower(*s);
}

int	main(void)
{
	char	str[] = "persepaska";

	ft_striter(str, imitate);
	ft_putstr(str);
	return (0);
}
