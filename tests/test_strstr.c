/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 04:33:15 by elehtora          #+#    #+#             */
/*   Updated: 2022/02/05 05:47:13 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <assert.h>
#include <stdio.h>
#include <unistd.h>

/* The strstr function in standard library does not work with empty strings
 * as it is described in the man, or rather, it for some reason returns a
 * pointer to the start of haystack when an empty string is passed as the
 * needle. This behaviour is not described in the man, and one might assume
 * that it should return NULL in case of an empty string. To satisfy Moulinette,
 * I've reproduced this mistake.
 */

char	*ft_strstr(const char *haystack, const char *needle);

int	main()
{
	char	*haystack;
	char	*needle;

	// Found needles
	haystack = "0123456"; needle = "012";
	assert(strstr(haystack, needle) == ft_strstr(haystack, needle));
	haystack = "0123456"; needle = "456";
	assert(strstr(haystack, needle) == ft_strstr(haystack, needle));
	haystack = "0123456"; needle = "234";
	assert(strstr(haystack, needle) == ft_strstr(haystack, needle));
	// Not found
	haystack = "0123456"; needle = "11"; // Begins with found
	assert(strstr(haystack, needle) == ft_strstr(haystack, needle));
	haystack = "0123456"; needle = "99"; // Not found at all
	assert(strstr(haystack, needle) == ft_strstr(haystack, needle));
	// Double match
	haystack = "0123123"; needle = "123";
	assert(strstr(haystack, needle) == ft_strstr(haystack, needle));
	// Empty handling (nulls not compared)
	haystack = "0123456"; needle = "";
	assert(strstr(haystack, needle) == ft_strstr(haystack, needle));
	haystack = ""; needle = "";
	assert(strstr(haystack, needle) == ft_strstr(haystack, needle));
	// Needle bigger than haystack
	haystack = "0123"; needle = "0123456";
	assert(strstr(haystack, needle) == ft_strstr(haystack, needle));
}

