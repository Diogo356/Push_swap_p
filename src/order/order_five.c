/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_five.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 14:56:35 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/05/23 15:12:29 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void order_five(t_pu_sw *ps)
{
    	int	nb_smaller;

	while(!validate_order(ps) || ps->size_b)
	{
		nb_smaller = search_nb_smaller(ps);
		if (ps->size_b == 2)
		{
			order_tree(ps);
			move_pa(ps);
			move_pa(ps);
		}
		else if (nb_smaller == ps->size_a - 1)
			move_pb(ps);
		else if (nb_smaller > 2 && nb_smaller != ps->size_a - 1)
			move_ra(ps);
		else if (nb_smaller < 3 && nb_smaller != ps->size_a - 1) 
			move_rra(ps);
	}
}
