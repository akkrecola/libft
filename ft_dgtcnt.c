/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dgtcnt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 02:44:17 by elehtora          #+#    #+#             */
/*   Updated: 2021/11/24 04:04:34 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
   Assumes the input to be a valid integer, i.e. no less than 1 in length.
   Returns the count of digits or -1 on error. Inputs out of integer range
   result in unpredictable behaviour.
 */

int	ft_dgtcnt(int n)
{
	int	count;

	if (n < 0)
		n *= -1;
	count = 0;
	while (n > 9)
	{
		n = (n - n % 10) / 10;
		count++;
	}
	return (count + 1);
}
