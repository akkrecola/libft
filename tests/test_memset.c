/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:16:05 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/24 18:58:05 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*s;
	size_t	size;
	// make it malloced pls, + add a strnew+strcpy function for usability
	s = ft_strnewi("Teh UMP is the worst weppon in the game.");
	if (!s)
		return (-1);
	ft_putendl(s);
	size = ft_strlen(s);
	ft_memset(s, 'R', size);
	ft_memset(s, 'B', 1);
	ft_putendl(s);

	return (0);
}
