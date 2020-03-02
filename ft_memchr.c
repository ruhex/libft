/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 18:02:18 by m-movcha          #+#    #+#             */
/*   Updated: 2020/03/01 23:07:19 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				num;
	const unsigned char	*str;

	num = n;
	str = (const unsigned char *)s;
	while ((int)--n > -1)
	{
		if (*str == (unsigned char)c)
			return (void *)str;
		str++;
	}
	return (NULL);
}
