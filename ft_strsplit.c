/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 18:55:59 by m-movcha          #+#    #+#             */
/*   Updated: 2020/03/02 20:37:55 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

static t_word		*get_string(char const *s, t_word *list)
{
	int		i;
	char	*tmp;
	t_word	*flag;

	flag = list;
	if (flag == NULL)
	{
		return (NULL);
	}
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

static t_word		*search(const char *s, char c, int index, t_word *list)
{
	t_index	tmp;
	int		flag;

	flag = 0;
	while (s[++index] != '\0')
	{
		if ((s[index] == c) && (s[index + 1] != c))
		{
			flag = 0;
			tmp.start = index + 1;
			flag++;
		}
		if (((index == 0) && (s[index + 1] != c)))
        {
          tmp.start = index;
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
			ft_list_push(&list, "-999", tmp);
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
	if (!(list))
	{
		tmp = (char **)malloc((1) * sizeof(char *));
		if (!(tmp))
			return (NULL);
		tmp[0] = 0;
		//*tmp = NULL;
		return (tmp);
	}
	list_size = ft_list_size(list);

	tmp = (char **)malloc((list_size + 1) * sizeof(char *));
	if (!(tmp))
		return (NULL);
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
	//tmp[i + 1] = ft_strnew(0);
	tmp[i + 1] = 0;

	if (tmp)
		return (tmp);
	return (NULL);
}
