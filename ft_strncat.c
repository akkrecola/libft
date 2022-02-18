/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 18:34:38 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/18 16:44:18 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*tmp;
	size_t	i;

	tmp = s1;
	while (*tmp != '\0')
		tmp++;
	i = 0;
	while (s2[i] != '\0' && i < n)
	{
		tmp[i] = s2[i];
		i++;
	}
	while (i < n)
		tmp[i++] = '\0';
	return (s1);
}
