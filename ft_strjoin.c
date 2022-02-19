/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 22:18:16 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/19 21:44:29 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*newstr;
	short int	len1;
	short int	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	newstr = ft_strnew(len1 + len2 + 1);
	if (!newstr)
		return (NULL);
	ft_strcpy(newstr, s1);
	ft_strcpy((newstr + len1), s2);
	return (newstr);
}
