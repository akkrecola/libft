/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:04:25 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/19 16:29:47 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*s;
	char		*new;

	s = "abc";
	new = ft_strdup(s);
	if (new == NULL)
		ft_putstrnl("strdup returned NULL");
	else
		ft_putstrnl(new);
	ft_memdel((void **)(&new));
	if (new == NULL)
		ft_putstrnl("Memory freed.");
	return (0);
}
