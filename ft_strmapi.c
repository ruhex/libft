/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 20:14:35 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/26 20:38:30 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*tmp;
	unsigned int	i;

	tmp = ft_strnew(ft_strlen(s));
	i = -1;
	if (s && tmp)
	{
		while (s[++i] != '\0')
			tmp[i] = (*f)(i, s[i]);
		tmp[i] = '\0';
		return (tmp);
	}
	return (NULL);
}
