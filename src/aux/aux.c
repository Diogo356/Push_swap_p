#include "push_swap.h"

int search_nb_smaller(t_pu_sw *ps)
{
    int i;
    int temp;
	int j;

	j = 0;
    i = 0;
    temp = ps->a[i];
    while (i < ps->size_a)
    {
        if(ps->a[i] < temp)
		{
            temp = ps->a[i];
			j = i;
		}
        i++;
    }

    return (j);
}

//função para encontrar o indice do menor numero da base para o topo(debaixo para cima), usando um range para saber até aonde pode ir;
int find_index_smallest_nb(int *stack, int stack_size, int portion, int min_range)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (stack_size < 20)
		return (stack_size - 1);
    while (++i < stack_size)
	{
		if (min_range <= stack[i] && stack[i] < portion)
		{
			j = i;
			break ;
		}
	}
    i = stack_size;
    while (--i < stack_size && i > stack_size - j)
	{
		if (min_range <= stack[i] && stack[i] < portion)
		{
			j = i;
			break ;
		}
	}
    return(j);
}

//função que leva o maior numero para o topo;
void	bigger_to_top(t_pu_sw *ps, unsigned int index_bigger, \
unsigned int size, char stack)
{
	int	distance;
	t_big big_index;

	if (index_bigger >= size / 2)
		distance = size - index_bigger - 1;
	else
		distance = index_bigger + 1;
	while (distance > 0)
	{
		if (stack == 'a')
		{
			big_index.a = index_bigger;
			big_index.b = 0;
			execution_move(ps, moviment_r_or_rr(ps, ps->a, NULL, big_index));
		}
		else if (stack == 'b')
		{
			big_index.a = 0;
			big_index.b = index_bigger;
			execution_move(ps, moviment_r_or_rr(ps, NULL, ps->b, big_index));
		}
		distance--;
	}
}
