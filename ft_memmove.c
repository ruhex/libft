/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:57:27 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/20 13:07:23 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char *dest;
	unsigned char *source;
	
	dest = dst;
	source = src;
	
	i = 0;
	while (i < len && *dest)
	{
		*dest = *source;
		dest++;
		source++;
		i++;
	}
}
