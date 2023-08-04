#include "push_swap.h"

void	exit_and_free(t_pu_sw *ps)
{
	write(2, "Error\n", 6);
	if (ps->a)
		free (ps->a);
	if (ps->b)
		free (ps->b);
	exit(ERROR);
}