/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 17:26:20 by m-movcha          #+#    #+#             */
/*   Updated: 2020/03/02 20:07:19 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t len;

	len = ft_strlen(dest);
	if (size > len)
		ft_strncat(dest, src, (size - len - 1));
	if (size < len)
		return (size + ft_strlen(src));
	return (len + ft_strlen(src));
}
