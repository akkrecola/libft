/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:09:05 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/17 07:30:50 by elehtora         ###   ########.fr       */
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

static char	*get_tail(char *s)
{
	char	*start;
	char	*tail;

	start = (char *) s;
	while (*s != '\0')
		s++;
	if (s == start)
		return ((char *)s);
	tail = s - 1;
	while (is_whitespace(*tail))
		tail--;
	return (tail);
}

static char	*get_start(char const *s)
{
	char	*start;

	start = (char *) s;
	while (is_whitespace(*start))
		start++;
	return (start);
}

char	*ft_strtrim(char const *s)
{
	char		*start;
	char const	*tail;
	char		*trimmed;
	char		*result_ptr;
//	size_t		i; //testing

	start = get_start(s);
	tail = get_tail(start);
	trimmed = ft_strnew(tail - start + 1);
//	ft_putnbr(tail - start + 1); // testing
	if (trimmed == NULL)
		return (NULL);
	result_ptr = trimmed;
	while (start <= tail)
	{
		*(trimmed++) = *(start++);
//		ft_putnbr(i++); //testing
//		ft_putchar(' '); //testing
	}
	return (result_ptr);
}
