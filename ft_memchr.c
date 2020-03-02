/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 18:02:18 by m-movcha          #+#    #+#             */
/*   Updated: 2020/03/01 21:41:58 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			num;
	const char		*str;

	num = n + 1;
	str = (const char *)s;
	while (--n != 0)
	{
		if (*str == c)
			return (void *)str;
		str++;
	}
	return (NULL);
}
