/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:47:35 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/22 13:25:02 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *source, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char*)dest;
	s = (unsigned char*)source;
	n++;

	while (--n != 0)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}
	

	

	
