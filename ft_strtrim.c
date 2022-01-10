/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:09:05 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/10 01:51:41 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	is_whitespace(char c)
{
	if (c == '\n' || c == ' ' || c == '\t')
		return (1);
	else
		return (0);
}

static char	*find_tail(char const *s)
{
	while (*s != '\0')
		s++;
	while (is_whitespace(*s) || *s == '\0')
		s--;
	return ((char *)s);
}

char	*ft_strtrim(char const *s)
{
	char	*tail;
	char	*trimmed;
	char	*tstart;

	while (is_whitespace(*s))
		s++;
	tail = find_tail(s);
	trimmed = ft_strnew(ft_strlen(s));
	tstart = trimmed;
	while (s != (tail + 1))
	{
		*trimmed = *s;
		trimmed++;
		s++;
	}
	trimmed = tstart;
	return (trimmed);
}
