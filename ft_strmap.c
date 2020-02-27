/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 18:32:00 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/26 19:43:38 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strmap(char const *s, char (*f)(char))
{
	char *tmp;
	char *p;

	tmp = ft_strnew(ft_strlen(s));

	if (s)
	{
		while (*s)
			*(tmp++) = (*f)((*s++));
		*(tmp++) = '\0';
		tmp = p;
		return (tmp);
	}
	return (NULL);
}
