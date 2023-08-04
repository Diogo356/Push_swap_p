/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_ra.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:58:10 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/06/10 14:58:48 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_ra(t_pu_sw *ps)
{
	int	temp;
	int	i;

	i = 0;
	if (!(ps->size_a > 1))
		return ;
	temp = ps->a[ps->size_a -1];
	i = ps->size_a - 1;
	while (i)
	{
		ps->a[i] = ps->a[i - 1];
		i--;
	}
	ps->a[i] = temp;
	write(1, "ra\n", 3);
}
