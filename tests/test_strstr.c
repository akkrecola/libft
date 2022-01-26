/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:35:20 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/19 16:02:11 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*haystack = "abcdef";
	const char	*needle = "def";
	char		*result;

	result = ft_strstr(haystack, needle);
	if (result != NULL)
		ft_putstrnl(result);
	else
		ft_putstrnl("ft_strstr returned NULL, substring not found.");
	return (0);
}
