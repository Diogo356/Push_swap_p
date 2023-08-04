/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execution_move.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:57:56 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/06/09 16:57:58 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	execution_move(t_pu_sw *ps, char *move)
{
	if (!ft_strcmp(move, "sa"))
		move_sa(ps);
	else if (!ft_strcmp(move, "sb"))
		move_sb(ps);
	else if (!ft_strcmp(move, "ss"))
		move_ss(ps);
	else if (!ft_strcmp(move, "pa"))
		move_pa(ps);
	else if (!ft_strcmp(move, "pb"))
		move_pb(ps);
	else if (!ft_strcmp(move, "ra"))
		move_ra(ps);
	else if (!ft_strcmp(move, "rb"))
		move_rb(ps);
	else if (!ft_strcmp(move, "rr"))
		move_rr(ps);
	else if (!ft_strcmp(move, "rra"))
		move_rra(ps);
	else if (!ft_strcmp(move, "rrb"))
		move_rrb(ps);
	else if (!ft_strcmp(move, "rrr"))
		move_rrr(ps);
}
