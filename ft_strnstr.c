/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 17:58:29 by m-movcha          #+#    #+#             */
/*   Updated: 2020/03/07 03:10:44 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *find, size_t n)
{
	char	*s;
	size_t		len;

	s = (char *)s1;
	len = ft_strlen(find);

	if (*find == 0)
		return (s);
	//if (ft_strlen(s1) < len)
	//	return (NULL);
	while  ((*s != '\0') && (--n >= len))
	{
		if (*s == *find)
			if ((ft_strncmp(s, find, len) == 0))
				return (s);
		s++;
	}
	return (0);
}
