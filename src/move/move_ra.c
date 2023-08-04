/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_ra.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 10:28:35 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/05/15 14:51:46 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_ra(t_pu_sw *ps)
{
	int	temp;
	int	i;

	if (!(ps->size_a > 1))
		return ;
	temp = ps->a[ps->size_a - 1];
	i = ps->size_a - 1;
	while (i)
	{
		ps->a[i] = ps->a[i - 1];
		i--;
	}
	ps->a[i] = temp;
	write(1, "ra\n", 3);
}
