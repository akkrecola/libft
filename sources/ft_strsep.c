/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:06:18 by elehtora          #+#    #+#             */
/*   Updated: 2022/11/10 13:54:54 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_strsep extracts a token from a string. If stringp is NULL,
 * no operation is taken and the function returns NULL. Otherwise, the function
 * finds the first token in the string *stringp, that is delimited by one of the
 * bytes in the string delim. This token is terminated by overwriting the
 * delimiter with a null byte, and *stringp is updated to point past the token.
 * In case no delimiter is found, the token is taken to be the entire string
 * *stringp, and *stringp is made NULL.
 *
 * NOTE: no allocation or copying is done - the original string is simply
 * null terminated at a found delimiter. Hence this function can be considered
 * destructive.
*/

char	*ft_strsep(char **stringp, const char *delim)
{
	char	*token;

	if (!stringp || !(*stringp))
		return (NULL);
	token = *stringp;
	while (**stringp)
	{
		if (ft_strchr(delim, **stringp))
		{
			**stringp = '\0';
			(*stringp)++;
			return (token);
		}
		(*stringp)++;
	}
	*stringp = NULL;
	return (token);
}
