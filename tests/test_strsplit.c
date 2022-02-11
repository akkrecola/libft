/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 14:23:29 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/08 12:41:52 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	char	**strings;
	int		i;

	if (argc != 3)
	{
		ft_putstr("ERROR: input string to split and a delimiter char");
		return (-1);
	}
	strings = ft_strsplit(argv[1], argv[2][0]);
	if (strings == NULL)
	{
		ft_putstr("Function returned NULL; memallocation failed.");
		return (-1);
	}
	i = 0;
	while (strings[i] != 0)
	{
		ft_putstr(strings[i]);
		i++;
		ft_nl();
	}
	return (0);
}
