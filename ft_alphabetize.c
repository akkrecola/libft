/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alphabetize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:57:14 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/20 15:01:18 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes the lowercase alphabet up to n characters into memory,
** and outputs the characters written.
*/

void	ft_alphabetize(void *dest, int n)
{
	int	a;
	int	i;
	int	n_start;
	int	row;

	if (n < 1)
		return ;
	a = 'a';
	i = 0;
	n_start = n;
	row = '0';
	while (n-- > 0)
	{
		((char *)dest)[i++] = a++;
		if ((a - 1) == 'z')
			a = 'A';
		if ((a - 1) == 'Z')
		{
			a = 'a';
			((char *)dest)[i++] = row++;
		}
	}
	ft_putstr("Characters written:\t");
	ft_putmemnl(dest, n_start);
}
