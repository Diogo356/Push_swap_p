#include "push_swap.h"

void move_rb(t_pu_sw *ps)
{
	int i;
	int temp;

	if (!(ps->size_b > 1))
		return ;
	i = ps->size_b - 1;
	temp = ps->b[ps->size_b - 1];
	while(i)
	{
		ps->b[i] = ps->b[i - 1];
		i--;
	}
	ps->b[i] = temp;
	write(1, "rb\n", 3);
}
