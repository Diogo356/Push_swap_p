#include "push_swap.h"

void move_rr(t_pu_sw *ps)
{
	int i;
	int temp;

	i = 0;
	if(!(ps->size_a > 1) || !(ps->size_b > 1))
		return ;
	i = ps->size_a - 1;
	temp = ps->a[ps->size_a - 1];
	while (i)
	{
		ps->a[i] = ps->a[i - 1];
		i--;
	}
	ps->a[i] = temp;
	i = ps->size_b - 1;
	temp = ps->b[ps->size_b - 1];
	while (i)
	{
		ps->b[i] = ps->b[i - 1];
		i--;
	}
	ps->b[i] = temp;
	write(1, "rr\n", 3);
}