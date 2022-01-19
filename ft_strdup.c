/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:11:06 by elehtora          #+#    #+#             */
/*   Updated: 2022/01/19 16:34:05 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/*
   stdlib strdup sets errno, but errno.h is a forbidden include, so errno
   is excluded also from this function.
 */

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	len;

	len = ft_strlen(s);
	new = ft_strnew(len);
	if (new == NULL)
		return (NULL);
	ft_strcpy(new, s);
	return (new);
}
