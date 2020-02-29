#include <stdio.h>
#include <string.h>
#include "libft.h"

int main ()
{
	t_index *index;

	index = (t_index *)malloc(sizeof(t_index));
	index->start = 1;

	printf("%d", index->start);

	return (0);
}
