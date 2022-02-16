/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rawmemchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 18:28:11 by elehtora          #+#    #+#             */
/*   Updated: 2021/11/11 18:28:22 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_rawmemchr(const void *s, int c)
{
	while (true)
	{
		if (*s == c)
			return (s);
		s++;
	}
}
