/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrnl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:10:57 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/19 15:49:42 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* A simple putstr variation that prints a newline after the output. */

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
