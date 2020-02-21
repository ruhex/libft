/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 09:20:52 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/20 09:57:50 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char 	*ft_strnew(size_t size)
{
	size_t i;
	char *tmp;


	if (!(tmp = ft_memalloc(size + 1)))
		return (NULL);
	
	i = 0;
	while (i <= size)
		tmp[i++] = '\0';
	return (tmp);
}
