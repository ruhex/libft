/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 17:47:45 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/22 11:47:51 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

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
	return(tmp);
}
