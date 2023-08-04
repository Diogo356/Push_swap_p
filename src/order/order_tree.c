/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_tree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:08:29 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/05/16 18:01:11 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void order_tree(t_pu_sw *ps)
{
    if(ps->size_a == 1 && ps->a[0] < ps->a[1])
        move_sa(ps);    
    if (ps->size_a == 1)
		return ;
	if (ps->size_a == 2 && ps->a[0] < ps->a[1])
		move_sa(ps);
	if (ps->size_a == 2 && ps->a[0] > ps->a[1])
		return ;
	if (ps->a[0] > ps->a[1] && ps->a[1] > ps->a[2])
		return ;
	if ((ps->a[0] < ps->a[1] && ps->a[2] < ps->a[0]) || \
	(ps->a[0] < ps->a[1] && ps->a[1] < ps->a[2]) || \
	(ps->a[0] > ps->a[2] && ps->a[2] > ps->a[1]))
		move_sa(ps);
	if (ps->a[1] > ps->a[2] && ps->a[0] < ps->a[2])
		move_rra(ps);
	if (ps->a[1] < ps->a[0] && ps->a[2] > ps->a[0])
		move_ra(ps);
	if (ps->a[0] > ps->a[1] && ps->a[1] > ps->a[2])
        return;
}