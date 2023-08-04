/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:58:59 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/06/10 18:34:39 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_pu_sw *ps)
{
	int	i_low_nb;

	while (!validate_order(ps) || ps->size_b)
	{
		i_low_nb = find_index_smaller_a(ps);
		if (ps->size_b == 2)
		{
			sort_three(ps);
			move_pa(ps);
			move_pa(ps);
		}
		else if (i_low_nb == ps->size_a -1 && ps->size_b < 2)
			move_pb(ps);
		else if (ps->size_b < 2 && i_low_nb > 2 && i_low_nb != ps->size_a -1)
			move_ra(ps);
		else if (ps->size_b < 2 && i_low_nb < 3 && i_low_nb != ps->size_a -1)
			move_rra(ps);
	}
}
