/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rrr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:58:29 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/06/09 18:05:05 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_rrr(t_pu_sw *ps)
{
	int	temp;
	int	i;

	i = 0;
	temp = ps->a[0];
	while (i < ps->size_a - 1)
	{
		ps->a[i] = ps->a[i + 1];
		i++;
	}
	ps->a[i] = temp;
	i = 0;
	temp = ps->b[0];
	while (i < ps->size_b - 1)
	{
		ps->b[i] = ps->b[i + 1];
		i++;
	}
	ps->b[i] = temp;
	write(1, "rrr\n", 4);
}
