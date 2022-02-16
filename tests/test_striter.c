/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 12:55:27 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/17 01:44:21 by elehtora         ###   ########.fr       */
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
	char	str[] = "it be like that";

	ft_striter(str, imitate);
	ft_putendl(str);
	return (0);
}
