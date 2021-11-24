/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dgtcnt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 02:44:17 by elehtora          #+#    #+#             */
/*   Updated: 2021/11/24 02:52:15 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Assumes the input to be a valid integer, no less than 1 in length. */

int	ft_cntdgt(int n)
{
	int	count;

	while (n > 9)
	{
		n = (n - n % 10) / 10;
		count++;
	}
	return (count + 1);
}
