/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 20:02:45 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/20 20:09:25 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	if (n)
	{
		d = dst;
		s = src;
		n++;

		while (--n != 0)
		{
			if ((*d++ = *s++) == c)
				return (d);
		}
	}
}

