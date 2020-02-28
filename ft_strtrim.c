/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 15:41:44 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/27 18:44:06 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*tmp;
	int		i;
	int		c;

	i = -1;
	c = 0;

	if (!(s))
		return (NULL);
	while (s[++i] != '\0')
		if((s[i] == ' ')
				|| (s[i] == '\n')
				|| (s[i] == '\t'))
			c++;
	tmp = ft_strnew(ft_strlen(s) - c);
	if (!(tmp))
		return (NULL);
	while (*s != '\0')
	{
		if((*s == ' ')
				|| (*s == '\n')
				|| (*s == '\t'))
			s++;
		else
			*(tmp++) = *(s++);
	}
	return (tmp);

}
