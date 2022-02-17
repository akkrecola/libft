/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 13:09:58 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/17 07:27:39 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*s = " abc ";
	char		*trimmed;
	size_t		len;

	len = strlen(s);
	trimmed = ft_strtrim(s);
	if (trimmed == NULL)
		ft_putstrnl("String memory allocation failed. (NULL returned)");
	ft_putendl(s);
//	ft_putnbrnl(len);
	ft_putmemnl(trimmed, len);
	return (0);
}
