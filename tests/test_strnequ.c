/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnequ.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 05:48:28 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/05 06:49:35 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>
// #include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n);

int	main()
{
	char const	*s1;
	char const	*s2;
	size_t		n;

	assert(ft_strnequ("abc", "abc", 3) == 1);
	assert(ft_strnequ("abc", "abc", 4) == 1);
	assert(ft_strnequ("abc", "abc", 0) == 1);
	assert(ft_strnequ("abc", "abcd", 5) == 0); // fail
	assert(ft_strnequ("abcd", "abc", 5) == 0);
	assert(ft_strnequ("abc", "abx", 3) == 0);
	assert(ft_strnequ("abx", "abc", 3) == 0);
	assert(ft_strnequ("abc", "abx", 2) == 1);
	assert(ft_strnequ("abc", "", 3) == 0);
	assert(ft_strnequ("", "abc", 3) == 0);
	assert(ft_strnequ("", "", 0) == 1);
	assert(ft_strnequ("abc", "abc", 100) == 1);

	return (0);
}
