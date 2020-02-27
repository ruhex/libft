/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 21:39:12 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/26 21:56:07 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = -1;
	if ((s1 && s2))
	{
		while (((*s1 != '\0') && (*s2 != '\0')) && (++i < n))
			if (!(*(s1++) == *(s2++)))
				return (0);
		return (1);
	}
	return (0);
}