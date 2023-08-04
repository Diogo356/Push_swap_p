/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_large_numbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:59:09 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/06/10 15:49:02 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_large_numbers(t_pu_sw *ps)
{
	t_div	portion;

	portion.max = 0;
	while (ps->size_a)
	{
		portion = info_portion_a(ps, portion);
		move_in_portion('b', ps, portion);
	}
	portion.min = ps->size_a + ps->size_b;
	while (ps->size_b)
	{
		portion = info_portion_b(ps, portion);
		move_in_portion('a', ps, portion);
	}
	portion.max = (ps->size_a + ps->size_b) / 48;
	while (ps->size_a)
	{
		portion = re_info_portion_a(ps, portion);
		move_in_portion('b', ps, portion);
	}
	while (ps->size_b)
	{
		bigger_to_top(ps, find_index_bigger(ps->b, ps->size_b), ps->size_b, 'b');
		move_pa(ps);
	}
}
