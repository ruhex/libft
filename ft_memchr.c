/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 18:02:18 by m-movcha          #+#    #+#             */
/*   Updated: 2020/03/01 22:58:44 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			num;
	const char		*str;

	num = n;
	str = (const char *)s;
	while ((int)--n > -1)
	{
		if (*str == c)
			return (void *)str;
		str++;
	}
	return (NULL);
}
