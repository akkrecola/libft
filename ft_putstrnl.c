/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrnl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:10:57 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/19 20:07:09 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   An ft_putendl clone. Forgot that it existed and wrote a bunch of tests
   with this already. Whoops.
 */

void	ft_putstrnl(char const *s)
{
	if (s == NULL)
		return ;
	while (*s != '\0')
	{
		ft_putchar(*s);
		s++;
	}
	ft_putchar('\n');
}
