/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:57:27 by m-movcha          #+#    #+#             */
/*   Updated: 2020/03/01 23:32:08 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*dest;
	const char	*source;

	i = 0;
	dest = (char*)dst;
	source = (char*)src;
	if (!(source == dest || len == 0))
	{
		if (source < dest)
			while ((int)--len > -1)
				*(dest + len) = *(source + len);
		else
		{
			while ((int)--len > -1)
			{
				*(dest + i) = *(source + i);
				i++;
			}
		}
	}
	return ((void *)dst);
}
