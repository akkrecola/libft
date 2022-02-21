/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhite.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 21:49:22 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/21 18:56:15 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_iswhite() returns 1 if c is an ASCII whitespace character, 0
** otherwise.
*/

int	ft_iswhite(char c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}
