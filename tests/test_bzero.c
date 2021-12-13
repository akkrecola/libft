/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 15:16:05 by elehtora          #+#    #+#             */
/*   Updated: 2021/12/13 15:33:34 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv)
{
	char	*str;
	size_t	size;

	if (argc < 3)
	{
		ft_putstr("Too few arguments.");
		return (-1);
	}
	if (argc > 3)
	{
		ft_putstr("Too many arguments.");
		return (-1);
	}
	str = argv[1];
	size = ft_atoi(argv[2]);
	ft_putstr(str);
	// ft_putnbr(ft_strlen(str));
	ft_bzero(str, size); // need for (void *)? really?
	// ft_putnbr(ft_strlen(str)); // can't work, strlen uses 0 as terminator
	ft_putstr(str + size); // should be 0 string -> cat -e
	ft_putnbr(str[2]);
	//ft_putchar(str[2]);
	//ft_putchar(str[0]);
	return (0);
}
