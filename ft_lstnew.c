/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/29 21:50:50 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/29 21:59:44 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*tmp;

	if (!(tmp = (t_list *)malloc(sizeof(t_word))))
		return (NULL);
	if (!(content))
	{
		tmp->content = NULL;
		tmp->content_size = 0;
	}
	else
	{
		tmp->content = content;
		tmp->content_size = content_size;
	}
	tmp->next = NULL;
	return (tmp);
}
