/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 10:09:20 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/22 11:45:50 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_strclr(char *s)
{
	if (s != NULL)
	{
		while (*s)
		{
			*s = '\0';
			s++;
		}
	}
}
