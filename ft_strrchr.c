/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 23:29:15 by m-movcha          #+#    #+#             */
/*   Updated: 2020/03/08 19:32:24 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = 0;
	if ((s[0] == c) && (s[0] == '\0'))
		return ((char *)s);
	while (*s)
	{
		if (*s == (char)c)
			p = (char *)s;
		if (*(s + 1) == (char)c)
			p = (char *)(s + 1);
		s++;
	}
	return (p);
}
