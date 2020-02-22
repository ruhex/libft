/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 13:42:10 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/21 13:57:38 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	unsigned char *str2;
	unsigned char *tmp;

	str2 = s2;

	while (*s1++);
	while (*s1++ = *str2++);
	return (s1);
}

