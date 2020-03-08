/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 23:53:21 by m-movcha          #+#    #+#             */
/*   Updated: 2020/03/07 17:59:39 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_word	*ft_create_word(const char *str, t_index index)
{
	t_word	*tmp;

	if (!(tmp = (t_word *)malloc(sizeof(t_word))))
		return (NULL);
	tmp->str = str;
	tmp->index.start = index.start;
	tmp->index.end = index.end;
	tmp->next = NULL;
	return (tmp);
}

void			ft_list_push(t_word **list, const char *str, t_index index)
{
	t_word	*tmp;

	tmp = *list;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ft_create_word(str, index);
	}
	else
		*list = ft_create_word(str, index);
}
