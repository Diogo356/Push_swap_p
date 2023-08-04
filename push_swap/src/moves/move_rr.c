/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:58:18 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/06/10 14:45:22 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_rr(t_pu_sw *ps)
{
	int	temp;
	int	i;

	i = 0;
	if (!(ps->size_a > 1) || !(ps->size_b > 1))
		return ;
	temp = ps->a[ps->size_a -1];
	i = ps->size_a - 1;
	while (i)
	{
		ps->a[i] = ps->a[i - 1];
		i--;
	}
	ps->a[i] = temp;
		temp = ps->b[ps->size_b - 1];
	i = ps->size_b - 1;
	while (i)
	{
		ps->b[i] = ps->b[i - 1];
		i--;
	}
	ps->b[i] = temp;
	write(1, "rr\n", 3);
}
