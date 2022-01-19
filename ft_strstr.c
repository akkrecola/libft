/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:16:12 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/19 16:01:48 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static int	strequ_noterm(char const *s1, char const *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	if (*s2 != '\0')
		return (0);
	return (1);
}

char	*ft_strstr(const char *haystack, const char *needle)
{
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			if (strequ_noterm(haystack, needle) == 1)
				return ((char *) haystack);
		}
		haystack++;
	}
	return (NULL);
}
