/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join_path.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elehtora <elehtora@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:02:34 by elehtora          #+#    #+#             */
/*   Updated: 2022/10/16 21:08:37 by elehtora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Joins path elements 'dirname' (path to parent) and 'basename' (path to file)
 * and returns a heap allocated pathname. If either argument is NULL or an empty
 * string, the function returns a duplicate of the opposite argument (e.g.
 * basename == NULL => return (strdup(dirname)), etc.).
 *
 * Arguments should be clean versions of basename and dirname, as if obtained by
 * basename(3) and dirname(3). For the formatting of these functions, see their
 * respective manuals.
 */
char	*ft_join_path(char *dirname, char *basename)
{
	char	*path;

	if (!dirname && !basename)
		return (NULL);
	if (!dirname || ft_strequ(dirname, ""))
		return (ft_strdup(basename));
	if (!basename || ft_strequ(basename, ""))
		return (ft_strdup(dirname));
	if (ft_strchr(dirname, '\0') - 1 == '/')
	{
		// Clean trailing / with dirname = ft_rstrip(dirname, "/");
		// Guard
	}
	return (ft_strdjoin(dirname, "/", basename));
}

