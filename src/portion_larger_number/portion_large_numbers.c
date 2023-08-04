/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   portion_large_numbers.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:58:53 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/06/09 18:07:53 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	move_to_b(t_pu_sw *ps, t_div portion, int aux)
{
	bigger_to_top(ps, near_pos_to_move(ps->a, ps->size_a, \
	portion.max, portion.min), ps->size_a, 'a');
	move_pb(ps);
	aux = near_pos_to_move(ps->a, ps->size_a, portion.max, portion.min);
	if (ps->b[ps->size_b - 1] > portion.half && \
	aux >= ps->size_a / 2 && aux != ps->size_a - 1)
		move_rr(ps);
	else if (ps->b[ps->size_b - 1] > portion.half)
		move_rb(ps);
}

static void	move_to_a(t_pu_sw *ps, t_div portion, int aux)
{
	bigger_to_top(ps, near_pos_to_move(ps->b, ps->size_b, \
	portion.max, portion.min), ps->size_b, 'b');
	move_pa(ps);
	aux = near_pos_to_move(ps->b, ps->size_b, portion.max, portion.min);
	if (ps->a[ps->size_a - 1] > portion.half && \
	aux < ps->size_b / 2 && aux != ps->size_b - 1)
		move_rr(ps);
	else if (ps->a[ps->size_a - 1] > portion.half)
		move_ra(ps);
}

void	move_in_portion(char stack, t_pu_sw *ps, t_div portion)
{
	int	aux;

	aux = 0;
	while (stack == 'b' && ps->size_a && ps->size_b < portion.max)
		move_to_b(ps, portion, aux);
	while (stack == 'a' && ps->size_b && \
	ps->size_a < (ps->size_a + ps->size_b) - portion.min)
		move_to_a(ps, portion, aux);
}
