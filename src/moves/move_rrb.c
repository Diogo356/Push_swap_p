/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rrb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:58:26 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/06/10 14:45:29 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_rrb(t_pu_sw *ps)
{
	int	temp;
	int	i;

	i = 0;
	if (!(ps->size_b > 1))
		return ;
	temp = ps->b[0];
	while (i < ps->size_b - 1)
	{
		ps->b[i] = ps->b[i + 1];
		i++;
	}
	ps->b[i] = temp;
	write(1, "rrb\n", 4);
}
