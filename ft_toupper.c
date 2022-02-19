/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 11:10:18 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/19 16:28:01 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ('a' <= (unsigned char) c && (unsigned char) c <= 'z')
		return ((unsigned char) c - 32);
	else
		return ((unsigned char) c);
}
