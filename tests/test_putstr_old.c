/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr_old.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 05:31:26 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/31 05:47:28 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <unistd.h>
#define	SSIZE 2000000

void	ft_putstr_old(char const *s)
{
	while (*s != '\0')
	{
		write(1, s, 1);
		s++;
	}

}

int	main(void)
{
	char	s[SSIZE];

	ft_memset(s, 'X', SSIZE);
	s[SSIZE - 1] = '\0';
	ft_putstr_old(s);
	return (0);
}
