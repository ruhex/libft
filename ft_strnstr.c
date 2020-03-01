/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 17:58:29 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/29 18:30:11 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*s;
	size_t		len;

	s = (char *)s1;
	len = ft_strlen(s2);

	if (*s2 == 0)
		return (s);
	if (ft_strlen(s1) < len)
		return (NULL);
	while  ((s = ft_strchr(s, *s2)) != 0 || --n < 1)
	{
		if (ft_strncmp(s, s2, len) == 0)
			return (s);
		s++;
	}
	return (0);
}
