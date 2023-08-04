#include "push_swap.h"

void move_sb(t_pu_sw *ps)
{
	int temp;

	if(ps->size_b >= 2)
		return ;
	temp = ps->b[ps->size_b - 1];
	ps->b[ps->size_b - 1] = ps->b[ps->size_b - 2];
	ps->b[ps->size_b - 2] = temp;
	write(1, "sb\n", 3);
}