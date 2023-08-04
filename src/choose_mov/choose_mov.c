/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   choose_mov.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:57:38 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/06/12 16:31:52 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*move_r_or_rr(t_pu_sw *ps, int *sa, int *sb, t_big_i big_index)
{
	if (sa && sb && ps->size_a > 1 && ps->size_b > 1 && \
	big_index.a != ps->size_a - 1 && big_index.b > (ps->size_b -1) / 2)
	{
		if (big_index.a >= (ps->size_a - 1) / 2 && \
		big_index.b >= (ps->size_b - 1) / 2)
			return ("rr");
		else if (big_index.a < (ps->size_a - 1) / 2 && \
		big_index.b < (ps->size_b - 1) / 2)
			return ("rrr");
	}
	if (sa && ps->a && big_index.a != ps->size_a - 1)
	{
		if (big_index.a >= ps->size_a / 2)
			return ("ra");
		else if (big_index.a < ps->size_a / 2)
			return ("rra");
	}
	if (sb && big_index.b != ps->size_b - 1)
	{
		if (big_index.b >= ps->size_b / 2)
			return ("rb");
		else if (big_index.b < ps->size_b / 2)
			return ("rrb");
	}
	return (NULL);
}

void	choose_move(t_pu_sw *ps, int range)
{
	t_big_i	big_index;
	int		near_pos;
	char	*move;

	near_pos = near_pos_to_move(ps->a, ps->size_a, range, 0);
	while (near_pos != ps->size_a - 1)
	{
		big_index.a = near_pos;
		big_index.b = find_predecessor_in_b(ps, ps->a[near_pos]);
		move = move_r_or_rr(ps, ps->a, ps->b, big_index);
		execution_move(ps, move);
		near_pos = near_pos_to_move(ps->a, ps->size_a, range, 0);
	}
}
