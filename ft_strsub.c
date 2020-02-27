/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 22:13:06 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/26 22:45:37 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*tmp;
	unsigned int	i;

	i = -1;
	tmp = ft_strnew(len);
	if (s && tmp)
	{
		while ((++i < len) && (i < ft_strlen(s)))
			tmp[i] = s[start + i];
		return (tmp);
	}
	return (NULL);
}
