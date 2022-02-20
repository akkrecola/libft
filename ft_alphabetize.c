/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alphabetize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:57:14 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/20 17:39:47 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes the lowercase alphabet up to n characters into memory,
** and outputs the characters written.
*/

void	ft_alphabetize(void *dest, size_t n)
{
	int		a;
	int		i;
	size_t	n_start;
	int		row;

	if (n < 1)
		return ;
	a = 'a';
	i = 0;
	n_start = n;
	row = '0';
	while (n-- > 0)
	{
		((char *)dest)[i++] = (char)a++;
		if ((a - 1) == 'z')
			a = 'A';
		if ((a - 1) == 'Z')
		{
			a = 'a';
			((char *)dest)[i++] = (char)row++;
		}
	}
	ft_putstr("Characters written:\t");
	ft_putmemnl(dest, n_start);
}
