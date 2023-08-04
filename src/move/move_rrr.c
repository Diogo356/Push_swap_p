#include "push_swap.h"

void move_rrr(t_pu_sw *ps)
{
	int i;
	int temp;

	i = 0;
	temp = ps->a[0];
	while (i < ps->size_a - 1)
	{
		ps->a[i] = ps->a[i + 1];
		i++;
	}
	ps->a[i] = temp;
	i = 0;
	temp = ps->b[0];
	while(i < ps->size_b)
	{
		ps->b[i] = ps->b[i + 1];
		i++;
	}
	ps->b[i] = temp;
	write(1, "rrr\n", 4);	
}
