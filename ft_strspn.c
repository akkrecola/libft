/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 22:11:03 by elehtora          #+#    #+#             */
/*   Updated: 2022/09/20 22:32:55 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Return the index of the first char of 'charset' that does not occur in 's'.
// If no (un)matching char is found, returns index of the first null character.
size_t	ft_strspn(const char *s, const char *charset)
{
	size_t	i;

	i = 0;
	while (ft_strchr(charset, s[i]))
		i++;
	return (i);
}
