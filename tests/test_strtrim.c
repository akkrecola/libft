/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:09:58 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/10 01:51:28 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	char	*trimmed;

	if (argc != 2)
	{
		ft_putstrnl("ERROR: Input a string to be trimmed.");
		return (-1);
	}
	trimmed = ft_strtrim(argv[1]);
	if (trimmed == NULL)
		ft_putstrnl("String memory allocation failed. (NULL returned)");
	ft_putstrnl(trimmed);
	return (0);
}
