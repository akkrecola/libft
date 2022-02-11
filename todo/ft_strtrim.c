/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:09:05 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/10 16:08:21 by elehtora         ###   ########.fr       */
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

static char	*get_tail(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	if (i == 0)
		return ((char *)s);
	i--;
	while (is_whitespace(s[i]))
		i--;
	return ((char *)&(s[i]));
}

char	*ft_strtrim(char const *s)
{
	char	*tail;
	char	*trimmed;
	char	*result_ptr;

	while (is_whitespace(*s))
		s++;
	tail = get_tail(s);
	trimmed = (char *) malloc(ft_strlen(s) + 1);
	if (trimmed == NULL)
		return (NULL);
	result_ptr = trimmed;
	while (s != (tail + 1))
		*(trimmed++) = *(s++);
	return (result_ptr);
}
