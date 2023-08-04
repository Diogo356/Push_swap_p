/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_hundred.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 18:21:50 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/05/24 12:31:57 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void order_hundred(t_pu_sw *ps, int division)
{
	int portion;

	if (validate_order(ps))
		return ;
	portion = 0;
	division = ps->size_a / 5;
	while (ps->size_a > 1)
	{
		portion = portion + division;
		if((float)ps->size_a / 5 > 5)
			division = ps->size_a / 5;
		while (ps->size_a && ps->size_b < portion)
		{
			//big_i = find_index_previus_in_b(ps, ps->a[ps->size_a - 1]); //recebemos a posição do numero anterior;
			choose_mov(ps, portion);// escolhemos o movimento;
			bigger_to_top(ps, find_index_previus_in_b(ps, ps->a[ps->size_a - 1]), ps->size_b, 'b');// mover o maior numero para o topo;
			move_pb(ps);
		}
	}
	bigger_to_top(ps, find_bigger_b(ps->b, ps->size_b), ps->size_b, 'b');
	while (ps->size_b)
		move_pa(ps);
}
