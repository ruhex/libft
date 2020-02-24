/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 15:34:58 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/23 13:35:23 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *tmp;
	if (!(tmp = ft_memcpy(ft_strnew(ft_strlen(s1)), s1, ft_strlen(s1))))
		return (NULL);
	return (tmp);
}

char	*ft_strdup2(const char *s1)
{
	
	return (ft_memcpy(ft_strnew(ft_strlen(s1)), s1, ft_strlen(s1)));
}
