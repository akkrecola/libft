/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:31:06 by elehtora          #+#    #+#             */
/*   Updated: 2021/11/11 19:02:09 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_strnew(size_t size)
{
	char	*area;
	int		i;

	area = (char *)malloc(size);
	if (area == NULL)
		return (NULL);
	i = -1;
	while (++i < size)
		area[i] = '\0';
	return (area);
}
