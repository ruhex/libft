/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 13:48:57 by m-movcha          #+#    #+#             */
/*   Updated: 2019/10/29 16:43:29 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < nb && src[i])
		i++;
	while ((i + j) < nb && dest[j])
	{
		src[i + j] = dest[j];
		j++;
	}
	while ((i + j) < nb)
	{
		dest[i + j] = '\0';
		i++;
	}
	return (dest);
}
