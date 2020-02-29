/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 15:34:58 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/28 21:47:19 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *tmp;
	
	tmp = ft_strnew(ft_strlen(s1));
	if (!(tmp))
		return (NULL);
	tmp = ft_memcpy(tmp, s1, ft_strlen(s1));
	if (!(tmp))
		return (NULL);
	return (tmp);
}
