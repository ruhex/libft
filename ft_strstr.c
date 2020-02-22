/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:44:53 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/22 11:34:06 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;
	char *tmp;

	tmp = ft_memalloc(ft_strlen(str));
	i = 0;
	j = 0;
	while (tmp[i])
	{
		while (tmp[i + j] == to_find[j] && to_find[j])
			j++;
		if (!to_find[j])
			return (&tmp[i]);
		j = 0;
		i++;
	}
	return (0);
}
