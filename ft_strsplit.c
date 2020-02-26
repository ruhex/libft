/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/23 18:55:59 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/25 17:16:43 by m-movcha         ###   ########.fr       */
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

t_word		*get_string(char const *s, t_word *list)
{
	int i;
	int a;
	int b;
	char *tmp;
	t_word *flag;
	flag = list;

	while (flag)
	{
		i = -1;
		a = flag->index.start;
		b = flag->index.end;
		tmp = (char *)malloc((b - a + 1) * sizeof(char));
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
		if ((s[index] != c) && ((s[index + 1] == c)	
					|| s[index + 1] == '\0'))
		{
			tmp.end = index;
			flag++;
		}
		if (flag == 2)
		{
			t_push(&list, "str", tmp);
			flag = 0;
		}
		
	}
	return (list);
}

char	**ft_strsplit(char const *s, char c)
{
	t_word *list;
	char **tmp;
	int list_size;
	int i;
	int j;

	list = 0;
	i = -1;
	list = get_string(s, search(s, c, -1, list));
	list_size = t_list_size(list);

	tmp = (char **)malloc((list_size - 1) * sizeof(char *));

	while (++i < list_size)
	{
		j = -1;
		tmp[i] = (char *)malloc(ft_strlen(list->str) * sizeof(char));
		while (++j <= ft_strlen(list->str))
		{
			tmp[i][j] = list->str[j];
		}
		list = list->next;
	}

	return (tmp);

	


}

int main ()
{
	//t_word *list;

	//list = 0;
	int i = -1;
	int j = -1;
	char str[] = "****string*test****mooore**doo";
	//list = get_string(search(str, '*', -1, list));
	
	char **test;

	test = ft_strsplit(str, '*');

	while (test[++i])
		printf("%s\n", test[i]);
	//while(test[++i])
 	//{			while(test[i][++j])
	//		write(1, test[i][j], 1);
	//	write(1, "\n", 1);
	//}
	

	//while (list)
	//{
	//	printf("\n%d", list->index.end);
	//	printf("\n%s", list->str);
	//	list = list->next;
	//}
	return (0);

}
