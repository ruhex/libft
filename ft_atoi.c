/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:02:24 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/21 23:11:36 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	int			minus;
	long int	nbr;

	i = 0;
	nbr = 0;
	minus = 1;
	if (!str[i])
		return (0);
	while (str[i] < 33)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		nbr = (nbr * 10) + str[i++] - '0';
	nbr *= minus;
	if (nbr > 2147483647)
		return (2147483647);
	if (nbr < -2147483648)
		return (-2147483648);
	return (nbr);
}
