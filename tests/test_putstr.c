/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 05:31:26 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/31 05:48:10 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <unistd.h>
#define	SSIZE 2000000

void	ft_putstr_new(char const *s)
{
	write(1, s, ft_strlen(s));
}

int	main(void)
{
	char	s[SSIZE];

	ft_memset(s, 'X', SSIZE);
	s[SSIZE - 1] = '\0';
	ft_putstr_new(s);
	return (0);
}
