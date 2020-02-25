/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: m-movcha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 01:43:32 by m-movcha          #+#    #+#             */
/*   Updated: 2020/02/24 02:14:32 by m-movcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
//#include "libft.h"

typedef struct    s_word
{
    char const         *str;
    int             start;
    int                end;
    struct s_word    *next;
}                t_word;

void	test_start()
{
	//
	//test_1(void);

}

void	test_1()
{
	t_word *tmp = t_create_elem("test 1", 1, 2);

	//if (tmp != NULL)
	{
	printf("%s", tmp->str);
	//	printf("%d", tmp->start);
	//	printf("%d", tmp->end);
	}
	//else
	//	printf("TEST 1 FALSE!");
}
