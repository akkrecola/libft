/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 16:41:49 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/23 17:00:22 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	main()
{
	char	*str;
	size_t	i;
	size_t	size;

	i = 0;
	size = 3;
	str = ft_strnew(size);
	while (i < size + 1)
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_strdel(&str);
}
