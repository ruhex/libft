/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 23:49:15 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/29 23:50:05 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_list_size(t_word *list)
{
	int		i;
	t_word	*tmp;

	i = 0;
	tmp = list;
	if (list)
	{
		i = 1;
		while (tmp->next)
		{
			tmp = tmp->next;
			i++;
		}
	}
	return (i);
}
