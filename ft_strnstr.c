/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:16:12 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/17 06:57:04 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static int	strequ_noterm(char const *s1, char const *s2, size_t len)
{
	size_t	i;

	i = 0;
	while (*s1 != '\0' && *s2 != '\0' && i < len)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
		i++;
	}
	if (*s2 != '\0')
		return (0);
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (*little == '\0')
		return ((char *) big);
	while (*big && len > 0)
	{
		if (*big == *little)
		{
			if (strequ_noterm(big, little, len) == 1)
				return ((char *) big);
		}
		big++;
		len--;
	}
	return (NULL);
}
