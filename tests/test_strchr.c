/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 13:38:16 by elehtora          #+#    #+#             */
/*   Updated: 2021/11/11 13:54:46 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
char	*ft_strchr(const char *s, int c);

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (-1);
	printf("Result: %c", *(ft_strchr(argv[1], atoi(argv[2]))));
	return (0);
}
