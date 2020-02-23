/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 20:02:45 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/23 02:02:46 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{

	int				i;
	i = -1;
	if (n)
	{
		n++;

		while (++i < (int)n)
		{
			d[i] = s[i];
			if (d[i] == (unsigned char)c)
				return ((void*)((unsigned char dst + i + 1));
		}
		return (NULL);
	}
	return (NULL);
}

