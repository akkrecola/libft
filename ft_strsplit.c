/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/25 03:51:54 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/08 12:45:38 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	ft_count_strings(const char *s, char delimiter)
{
	int	strings;

	strings = 0;
	while (*s != '\0')
	{
		if (*s != delimiter)
		{
			strings++;
			while (*s != delimiter && *s != '\0')
				s++;
		}
		s++;
	}
	return (strings);
}

static int	ft_substrlen(const char *s, char delimiter)
{
	unsigned int	len;

	len = 0;
	while (s[len] != '\0' && s[len] != delimiter)
		len++;
	return (len);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**strings;
	int		len;
	int		i;

	strings = (char **) malloc(sizeof(char *) * ft_count_strings(s, c) + 1);
	if (strings == NULL)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		else if (*s != '\0')
		{
			len = ft_substrlen(s, c);
			strings[i] = ft_strnew(len);
			ft_strncpy(strings[i], s, len);
			i++;
			while (*s != c)
				s++;
		}
	}
	strings[i + 1] = 0;
	return (strings);
}
