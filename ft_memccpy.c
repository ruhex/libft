/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 20:02:45 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/22 13:29:19 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{

	size_t			i;
	unsigned char 	*d;
	unsigned char	*s;

	d = (unsigned char*)dst;
	s = (unsigned char*)src;

	i = 0;
	if (n)
	{
		
		n++;

		while (i < n)
		{
			d[i] = s[i];
			if (d[i] == c)
				return ((void*)(dst));
		}
	}
	return (NULL);
}

