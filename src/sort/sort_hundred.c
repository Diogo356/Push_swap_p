/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_hundred.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:59:03 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/06/12 16:42:00 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_hundred(t_pu_sw *ps, int division)
{
	int	portion;

	if (validate_order(ps))
		return ;
	portion = 0;
	while (ps->size_a > 1)
	{
		portion = portion + division;
		if ((float)ps->size_a / 5 > 5)
			division = ps->size_a / 5;
		while (ps->size_a && ps->size_b < portion)
		{
			choose_move(ps, portion);
			bigger_to_top(ps, find_predecessor_in_b(ps, \
			ps->a[ps->size_a - 1]), ps->size_b, 'b');
			move_pb(ps);
		}
	}
	bigger_to_top(ps, find_index_bg(ps->b, ps->size_b), ps->size_b, 'b');
	while (ps->size_b)
		move_pa(ps);
}
