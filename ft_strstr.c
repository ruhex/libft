/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:44:53 by m-movcha          #+#    #+#             */
/*   Updated: 2020/03/02 20:05:27 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*s;
	size_t		len;

	s = (char *)s1;
	len = ft_strlen(s2);
	if (*s2 == 0)
		return (s);
	if (ft_strlen(s1) < len)
		return (NULL);
	while ((s = ft_strchr(s, *s2)) != 0)
	{
		if (ft_strncmp(s, s2, len) == 0)
			return (s);
		s++;
	}
	return (0);
}
