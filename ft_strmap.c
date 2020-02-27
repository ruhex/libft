/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 18:32:00 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/26 18:39:17 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char * ft_strmap(char const *s, char (*f)(char))
{
	char *tmp;

	tmp = ft_strnew(ft_strlen(s));

	if (tmp)
	{
		while (tmp)
		{
			(*f)*(tmp++);
		}
		return (tmp);
	}
	return (NULL);
}
