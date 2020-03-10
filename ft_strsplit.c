/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 18:55:59 by m-movcha          #+#    #+#             */
/*   Updated: 2020/03/09 23:37:32 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

static void			ft_if(char *c, t_index *index, int *flag, int i)
{
	if ((c[0] == c[2]) && (c[1] != c[2]))
	{
		*flag = 0;
		*flag += 1;
		index->start = i + 1;
	}
	if ((i == 0) && (c[1] != c[2]))
	{
		index->start = i;
		*flag += 1;
	}
	if (((c[0] != c[2]) && (c[1] == c[2]))
			|| ((c[1] == '\0') && (c[0] != c[2])))
	{
		if (i == 0)
		{
			index->start = i;
			*flag += 1;
		}
		index->end = i;
		*flag += 1;
	}
}

static t_word		*search(const char *s, char c, int index)
{
	t_word	*list;
	t_index	tmp;
	int		flag;
	char	*cc;

	list = 0;
	flag = 0;
	if (!(cc = (char *)malloc(3 * sizeof(char))))
		return (NULL);
	while (s[++index] != '\0')
	{
		cc[0] = s[index];
		cc[1] = s[index + 1];
		cc[2] = c;
		ft_if(cc, &tmp, &flag, index);
		if (flag >= 2)
		{
			ft_list_push(&list, "-999", tmp);
			flag = 0;
		}
		if (s[index + 1] == '\0')
			break ;
	}
	return (list);
}

static t_word		*get_string(char const *s, t_word *list)
{
	int		i;
	char	*tmp;
	t_word	*flag;

	flag = list;
	if (!flag)
		return (0);
	while (flag)
	{
		i = -1;
		if ((flag->index.start < 0) || (flag->index.end < 0))
			return (NULL);
		tmp = ft_strnew(flag->index.end - flag->index.start + 1);
		while (++i <= (flag->index.end - flag->index.start))
			tmp[i] = s[flag->index.start + i];
		flag->str = tmp;
		flag = flag->next;
	}
	return (list);
}

static char			**get_massiv(void)
{
	char **tmp;

	if (!(tmp = (char **)malloc((1) * sizeof(char *))))
		return (NULL);
	tmp[0] = 0;
	return (tmp);
}

char				**ft_strsplit(char const *s, char c)
{
	t_word	*list;
	char	**tmp;
	int		i;
	int		j;

	if (!s || !c)
		return (NULL);
	i = -1;
	get_massiv();
	if (!(list = get_string(s, search(s, c, -1))))
		return (get_massiv());
	if (!(tmp = (char **)malloc((ft_list_size(list) + 1) * sizeof(char *))))
		return (NULL);
	while (list)
	{
		j = -1;
		tmp[++i] = (char *)malloc((ft_strlen(list->str) + 1) * sizeof(char));
		if (!tmp[i])
			return (NULL);
		while (++j <= (int)ft_strlen(list->str))
			tmp[i][j] = list->str[j];
		list = list->next;
	}
	tmp[i + 1] = 0;
	return (tmp);
}
