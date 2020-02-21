/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 23:53:22 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/20 16:00:58 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *tmp;

	tmp = b;
	i = 0;
	while ( i < len && *tmp)
	{
		*tmp = c;
		i++;
		tmp++;

	}

	
}
