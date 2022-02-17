/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:34:38 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/17 06:48:11 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	char	*tmp;
	size_t	i;

	tmp = dest;
	while (*tmp != '\0')
		tmp++;
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		tmp[i] = src[i];
		i++;
	}
	while (i <= n)
		tmp[i++] = '\0';
	return (dest);
}
