/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:16:12 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/05 05:41:24 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

static int	strequ_noterm(char const *haystack, char const *needle)
{
	while (*haystack != '\0' && *needle != '\0')
	{
		if (*haystack != *needle)
			return (0);
		haystack++;
		needle++;
	}
	if (*needle != '\0')
		return (0);
	return (1);
}

char	*ft_strstr(const char *haystack, const char *needle)
{
	if (*needle == '\0')
		return ((char *) haystack);
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
