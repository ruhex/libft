/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:55:03 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/27 15:41:17 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	char	*p;

	tmp = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	p = tmp;
	if (tmp && s1 && s2)
	{
		while (*s1)
			*(tmp++) = *(s1++);
		while (*s2)
			*(tmp++) = *(s2++);
		tmp = p;
		return (tmp);
	}
	return (NULL);
}
