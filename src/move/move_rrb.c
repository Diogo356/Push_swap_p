#include "push_swap.h"

void move_rrb(t_pu_sw *ps)
{
 
	int	temp;
	int	i;

	if (!(ps->size_b > 1))
		return ;
	i = 0;
	temp = ps->b[0];
	while (i < ps->size_b - 1)
	{
		ps->b[i] = ps->b[i + 1];
		i++;
	}
	ps->b[i] = temp;
	write(1, "rrb\n", 4);
}