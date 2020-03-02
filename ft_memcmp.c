/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 17:12:51 by m-movcha          #+#    #+#             */
/*   Updated: 2020/03/01 21:37:33 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			num;
	unsigned char	*str1;
	unsigned char	*str2;

	num = n;
	if (num != 0)
	{
		str1 = (unsigned char*)s1;
		str2 = (unsigned char*)s2;
		while ((int)--n > -1)
		{
			if (*str1++ != *str2++)
				return (*--str1 - *--str2);
		}
	}
	return (0);
}
