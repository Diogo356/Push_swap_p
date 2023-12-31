/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_pa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:58:01 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/06/09 18:10:26 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_pa(t_pu_sw *ps)
{
	if (!(ps->size_b >= 1))
		return ;
	ps->size_a++;
	ps->a[ps->size_a - 1] = ps->b[ps->size_b - 1];
	ps->size_b--;
	write(1, "pa\n", 3);
}
