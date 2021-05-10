/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: rvan-sch <rvan-sch@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/22 20:44:53 by rvan-sch      #+#    #+#                 */
/*   Updated: 2019/11/22 20:45:06 by rvan-sch      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*scopy;

	scopy = (char *)malloc(ft_strlen(s1) + 1);
	if (scopy == NULL)
		return (NULL);
	else
		ft_strlcpy(scopy, s1, ft_strlen(s1) + 1);
	return (scopy);
}
