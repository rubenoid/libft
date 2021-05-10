/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvan-sch <rvan-sch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 22:05:26 by rvan-sch          #+#    #+#             */
/*   Updated: 2019/11/08 15:09:55 by rvan-sch      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*tdst;
	char	*tsrc;

	tdst = (char*)dst;
	tsrc = (char*)src;
	i = 1;
	if (src < dst)
		while (i <= len)
		{
			tdst[len - i] = tsrc[len - i];
			i++;
		}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
