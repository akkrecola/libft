/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_alphabetize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:57:14 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/12 12:21:07 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
   Writes the lowercase alphabet up to n characters into memory,
   and outputs the characters written.
 */

void	ft_alphabetize(void *dest, int n)
{
	int	a;
	int	i;
	int	n_start;

	if (n < 1)
	{
		ft_putstrnl("No data was written by alphabetize.");
		return ;
	}
	a = 'a';
	i = 0;
	n_start = n;
	while (n-- > 0)
	{
		((char *)dest)[i++] = a++;
		// ft_putchar(((char *)dest)[i]);
	}
	ft_putstr("Characters written:\t");
	ft_putmemnl(dest, n_start);
}
