/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 18:55:59 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/27 02:14:40 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

t_word		*get_string(char const *s, t_word *list)
{
	int		i;
	int		a;
	int		b;
	char	*tmp;
	t_word	*flag;

	flag = list;
	while (flag)
	{
		i = -1;
		a = flag->index.start;
		b = flag->index.end;
		tmp = ft_strnew(b - a + 1);
		while (++i <= (b - a))
		{
			tmp[i] = s[a + i];
		}
		flag->str = tmp;
		flag = flag->next;
	}
	return (list);
}

t_word		*search(const char *s, char c, int index, t_word *list)
{
	t_index	tmp;
	int		flag;

	flag = 0;
	while (s[++index] != '\0')
	{
		if ((s[index] == c) && (s[index + 1] != c))
		{
			tmp.start = index + 1;
			flag++;
		}
		if (((s[index] != c) && (s[index + 1] == c))
					|| ((s[index + 1] == '\0') && (s[index] != c)))
		{
			if (index == 0)
          	{
            	tmp.start = index;
            	flag++;
          	}
			tmp.end = index;
			flag++;
		}
		if (flag == 2)
		{
			t_push(&list, "str", tmp);
			flag = 0;
		}
		if (s[index + 1] == '\0')
			break;
	}
	return (list);
}

char		**ft_strsplit(char const *s, char c)
{
	t_word		*list;
	char		**tmp;
	int			list_size;
	int			i;
	int			j;

	list = 0;
	i = -1;
	list = get_string(s, search(s, c, -1, list));
	list_size = t_list_size(list);
	tmp = (char **)malloc((list_size + 1) * sizeof(char *));
	while (list)
	{
		i++;
		j = -1;
		tmp[i] = (char *)malloc((ft_strlen(list->str) + 1) * sizeof(char));
		while (++j <= (int)ft_strlen(list->str))
		{
			tmp[i][j] = list->str[j];
		}
		list = list->next;
	}
	tmp[i + 1] = ft_strnew(0);
	return (tmp);
}
