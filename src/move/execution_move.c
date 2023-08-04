#include "push_swap.h"

// essa função serve para cuidar da parte execução dos movimentos, a variavel move vai armazer uma string, e essa string ira chamar a função a ser executada;
void execution_move(t_pu_sw *ps, char *move)
{
	if(!ft_strcmp(move, "sa"))
		move_sa(ps);
	else if(!ft_strcmp(move, "sb"))
		move_sb(ps);
	else if(!ft_strcmp(move, "ss"))
		move_ss(ps);
	else if(!ft_strcmp(move, "pa"))
		move_pa(ps);
	else if(!ft_strcmp(move, "pb"))
		move_pb(ps);
	else if(!ft_strcmp(move, "ra"))
		move_ra(ps);
	else if(!ft_strcmp(move, "rb"))
		move_rb(ps);
	else if(!ft_strcmp(move, "rr"))
		move_rr(ps);
	else if(!ft_strcmp(move, "rra"))
		move_rra(ps);
	else if(!ft_strcmp(move, "rrb"))
		move_rrb(ps);
	else if(!ft_strcmp(move, "rrr"))
		move_rrr(ps);
}
