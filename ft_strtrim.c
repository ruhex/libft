/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 15:41:44 by m-movcha          #+#    #+#             */
/*   Updated: 2020/03/07 23:27:34 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	t_index *index;
	char	*tmp;
	int		len;
	int		i;

	i = 0;
	if (!((index = (t_index *)malloc(sizeof(t_index))) && (s)))
		return (NULL);
	while (ft_istrim(s[i++]) == 0)
		;
	index->start = i - 1;
	i = ft_strlen(s);
	while (ft_istrim(s[--i]) == 0)
		;
	index->end = i;
	if (index->start > index->end)
		index->end = index->start - 1;
	len = index->end - index->start;
	i = -1;
	if (!(tmp = ft_strnew(len)))
		return (NULL);
	while (++i <= len)
		tmp[i] = s[index->start + i];
	return (tmp);
}
