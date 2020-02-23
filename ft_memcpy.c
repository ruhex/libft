/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:47:35 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/22 23:45:55 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t n)
{
	char		*d;
	const char	*s;

	d = (char*)dest;
	s = (const char*)source;
	n++;
	if ((d == NULL) && (s == NULL))
		return (NULL);
	if (!((d == s) || (n == 0)))
	{
		while (--n != 0)
		{
			*d = *s;
			d++;
			s++;
		}
	}
	return (dest);
}
