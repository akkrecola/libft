/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:35:20 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/20 11:05:26 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#define LEN 4

int	main(void)
{
	const char	*big = "abcdef";
	const char	*little = "abcd";
	size_t		len;
	char		*result;

	len = LEN;
	result = ft_strnstr(big, little, len);
	if (result != NULL)
		ft_putstrnl(result);
	else
		ft_putstrnl("ft_strstr returned NULL, substring not found.");
	return (0);
}
