/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 15:41:44 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/28 21:06:08 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int is_trim(char c)
{
  if ((c == ' ') || (c == '\n') || (c == '\t'))
      return (0);
  return (-24);
}

char	*ft_strtrim(char const *s)
{
	t_index *index;
	char	*tmp;
	int 	len;
	int		i;

	i = 0;
	index = (t_index *)malloc(sizeof(t_index));
	len = ft_strlen(s);
	if (!((index) && (s)))
		return (NULL);
	while (is_trim(s[i++]) == 0);
	index->start = i - 1;
	i = len;
	while (is_trim(s[--i]) == 0);
	index->end = i;
	if ( index->start > index->end)
    	index->end = index->start - 1;
	len = index->end - index->start;
	i = -1;
	tmp = ft_strnew(len + 1);
	if (!(tmp))
		return (NULL);
	while (++i <= len)
		tmp[i] = s[index->start + i];
	return (tmp);
}
