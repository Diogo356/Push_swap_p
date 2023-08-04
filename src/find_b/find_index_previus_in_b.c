#include "push_swap.h"

//função que procura o index do valor mais proximo do valor que está destinado a chegar no b, assim voce já consegue ir ordenando os valores em b tambem;
int find_index_previus_in_b(t_pu_sw *ps, int smaller_nb_a)
{
	int i;
	int previus_nb;
	int j;
	int check; 

	j = 0;
	previus_nb = -1;
	check = 0;
	i = 0;
	while (ps->b && i < ps->size_b)
	{
		if (previus_nb < ps->b[i] && ps->b[i] < smaller_nb_a)
		{
			previus_nb = ps->b[i];
			j = i;
			check = 1;
		}
		i++;
	}
	if(!check)//se não encontrar o valor ele retorna a posição do maior valor dentro da stack_b
		return (find_bigger_b(ps->b, ps->size_b));
	return(j);
}
