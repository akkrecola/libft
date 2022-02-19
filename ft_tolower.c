/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:19:46 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/19 16:28:13 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ('A' <= (unsigned char) c && (unsigned char) c <= 'Z')
		return ((unsigned char) c + 32);
	else
		return ((unsigned char) c);
}
