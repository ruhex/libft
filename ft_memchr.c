/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 18:02:18 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/20 18:18:45 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			num;
	unsigned char 	*str;

	num = n + 1;
	str = s;
	if (str != NULL)
	{
		while (--n != 0)
		{
			if (*str == c)
				return (void *)str;
			str++;
		}
	}
	return (NULL);

}
