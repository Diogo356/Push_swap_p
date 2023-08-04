/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_pb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:58:06 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/06/10 14:45:08 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_pb(t_pu_sw *ps)
{
	if (!(ps->size_a >= 1))
		return ;
	ps->size_b++;
	ps->b[ps->size_b - 1] = ps->a[ps->size_a - 1];
	ps->size_a--;
	write(1, "pb\n", 3);
}