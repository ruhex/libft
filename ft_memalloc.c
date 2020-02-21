/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 08:34:55 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/20 08:47:53 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	size_t *tmp;

	tmp = (size_t)malloc(size);

	if (tmp == NULL)
		return (NULL);
}
