/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:31:06 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/19 00:30:31 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_strnew(size_t size)
{
	char	*area;
	size_t	i;

	area = (char *) malloc(size + 1);
	if (area == NULL)
		return (NULL);
	i = -1;
	while (++i < size)
		area[i] = '\0';
	return ((void *) area);
}
