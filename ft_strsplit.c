/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 18:55:59 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/24 01:22:37 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_word	*t_create_elem(const char *str, int start, int end)
{
	t_word *tmp;

	if (!(tmp = (t_word *)malloc(sizeof((t_word)))))
		return (NULL);
	tmp->str = str;
	tmp->start = start;
	tmp->end = end;
	tmp->next = NULL;
	return (tmp);
}

void	t_push(t_word **list, const char *str, int start, int end)
{
	t_word	*tmp;

	tmp = *list;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
	   tmp->next = t_create_elem(str, start, end);
	}
	else
		*list = t_create_elem(str, start, end);
}

int 	t_list_size(t_word *list)
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

char	**ft_strsplit(char const *s, char c)
{
	char **tmp;


	ft_memalloc
}
