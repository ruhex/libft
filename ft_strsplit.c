/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 18:55:59 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/24 19:35:48 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
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
		*list = t_create_elem(str, 
				index);
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

int		search(const char *s, char c, int index)
{
	int i;

	i = -1;
	while (s[++i] != '\0')
	{
		if ((s[i] == c) && (s[i + 1] != c))
			return (i);
	}
}

char	**ft_strsplit(char const *s, char c)
{
	char **tmp;




}

int main ()
{
	t_word **list;

	t_index index;

	index.start = 1;
	index.end = 2;

	t_word *test = t_create_elem("test", index);

	if (test != NULL)
		printf("TEST 1: OK	%s", test->index.start);

	t_push(list, "test2", index);
	t_push(list, "test3", index);
	t_push(list, "test4", index);

	if (list[0] != NULL)
		printf("\nTEST 2: OK	%s", list[0]->str);

	if (t_list_size(list[0]) == 3)
		printf("TEST 3: OK");
	return (0);

}
