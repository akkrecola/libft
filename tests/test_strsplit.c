/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 14:23:29 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/15 16:38:14 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static void	putresult(char **str_array)
{
	while (*str_array != 0)
	{
		ft_putstr(*str_array);
		ft_putstr("\033[0;32m");
		ft_putstr("|");
		ft_putstr("\033[0m");
		str_array++;
		free(*(str_array - 1));
	}
	if (*str_array == 0)
		ft_putstr("\nstr_array contains terminating null.");
	ft_nl();
}

static void	Test(char const *s, char c, size_t *test)
{
	char	**str_array;

	str_array = ft_strsplit(s, c);
	if (!str_array)
		ft_putendl("Strsplit returned NULL.");

	putresult(str_array);
	ft_putstr("*** Test ");
	ft_putnbr(*test);
	ft_putendl(" completed. ***");

	(*test)++;
	free(str_array);
}

int	main(void)
{
	size_t	test;

	test = 1;
	Test("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas     ligula massa, varius a, semper congue, euismod non, mi.", 'i', &test);
	Test("**ipsum**", '*', &test);
	Test("iapsamiloremi", 'i', &test);
	return (0);
}
