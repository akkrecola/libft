/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:50:09 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/17 07:00:13 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*add_substr(char const **s, char c)
{
	char	*start;
	char	*tail;
	char	*substr;
	size_t	len;

	start = (char *) *s;
	while (**s != c && **s != '\0')
		(*s)++;
	tail = (char *) *s;
	len = tail - start;
	substr = (char *) malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_strncpy(substr, start, len);
	substr[len] = '\0';
	return (substr);
}

static size_t	count_substr(char const *s, char c)
{
	size_t	substrings;

	substrings = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			substrings++;
			while (*s != c && *s != '\0')
				s++;
			if (*s == '\0')
				return (substrings);
		}
		s++;
	}
	return (substrings);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**str_array;
	size_t	i;

	str_array = (char **) malloc(sizeof(char *) * count_substr(s, c) + 1);
	if (!str_array)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		while (*s == c)
			s++;
		if (*s == '\0')
			return (str_array);
		str_array[i] = add_substr(&s, c);
		if (str_array[i] == NULL)
			return (NULL);
		i++;
	}
	str_array[i] = 0;
	return (str_array);
}
