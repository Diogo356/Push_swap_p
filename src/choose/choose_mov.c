#include "push_swap.h"

//função que vai indentificar o melhor movimento a ser executado;
char *moviment_r_or_rr(t_pu_sw *ps, int *sa, int *sb, t_big big_index)
{
	if(sa && sb && ps->size_a > 1 && ps->size_b > 1 && \
	big_index.a != ps->size_a - 1 && big_index.b > (ps->size_b - 1) / 2)
	{
		if(big_index.a >= (ps->size_a - 1) / 2 && big_index.b >= (ps->size_b - 1) / 2)
			return("rr");
		else if(big_index.a < (ps->size_a - 1) / 2 && big_index.b < (ps->size_b - 1) / 2)
			return("rrr");
	}
	if(sa &&ps->a && big_index.a != ps->size_a - 1)
	{
		if(big_index.a >= ps->size_a / 2)
			return("ra");
		else if(big_index.a  < ps->size_a / 2)
			return("rra");
	}
	if(sb && ps->b && big_index.b != ps->size_b - 1)
	{
		if(big_index.b >= ps->size_b / 2)
			return("rb");
		else if(big_index.b < ps->size_b / 2)
			return("rrb");
	}	
	return (NULL);
}

//essa função vai procurar os numeros menores e vai prcurar o melhor movimento a ser executado. Os movimentos executados vão ser entre ra, rb, rr, rra, rrb, rrr. OS movimentos vão ser armazenados pela variavel move;
void choose_mov(t_pu_sw *ps, int portion)
{
	t_big big_index;
	int smaller_nb_a;
	char *move;

	smaller_nb_a = find_index_smallest_nb(ps->a, ps->size_a, portion, 0);
	while (smaller_nb_a != ps->size_a - 1)
	{
		big_index.a = smaller_nb_a;
		big_index.b = find_index_previus_in_b(ps, ps->a[smaller_nb_a]);
		move = moviment_r_or_rr(ps, ps->a, ps->b, big_index);
		if (smaller_nb_a < ps->size_b && !ft_strcmp(move, "ra") && 
        find_index_previus_in_b(ps, ps->a[smaller_nb_a] != ps->size_b - 1))
            move_rr(ps);
        else if (ps->size_a - smaller_nb_a < ps->size_b && 
        !ft_strcmp(move, "rra") && find_index_previus_in_b(ps, 
        ps->a[smaller_nb_a]) != ps->size_b - 1)
            move_rrr(ps);
		else 
			execution_move(ps, move);
		smaller_nb_a = find_index_smallest_nb(ps->a, ps->size_a, portion, 0); //recebe o indice do menor numero dentro da stack;
	}
}
