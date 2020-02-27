/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 16:12:52 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/26 16:23:05 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_word	*t_create_elem(const char *str, t_index index)
{
	t_word *tmp;

	if (!(tmp = (t_word *)malloc(sizeof(t_word))))
		return (NULL);
	tmp->str = str;
	tmp->index.start = index.start;
	tmp->index.end = index.end;
	tmp->next = NULL;
	return (tmp);
}

void	t_push(t_word **list, const char *str, t_index index)
{
	t_word	*tmp;

	tmp = *list;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = t_create_elem(str, index);
	}
	else
		*list = t_create_elem(str, index);
}

int		t_list_size(t_word *list)
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
