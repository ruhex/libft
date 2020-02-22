/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:57:27 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/22 00:01:35 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dest;
	unsigned char *source;
	
	dest = dst;
	source = src;

	if (source == dest || len == 0)
		return ((void *)dst);

	while (*dest++ = *source++)
		if (--len == 0)
			return ((void *)dst);
	return ((void *)dst);

}
