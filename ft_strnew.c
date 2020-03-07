/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 09:20:52 by m-movcha          #+#    #+#             */
/*   Updated: 2020/03/07 13:01:18 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*tmp;

	size++;
	if (!(tmp = ft_memalloc(size)))
		return (NULL);
	i = 0;
	while (i < size)
		tmp[i++] = '\0';
	return (tmp);
}
