/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_rra.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:27:20 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/05/15 14:38:41 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void move_rra(t_pu_sw *ps)
{
 
	int	temp;
	int	i;

	if (!(ps->size_a > 1))
		return ;
	i = 0;
	temp = ps->a[0];
	while (i < ps->size_a - 1)
	{
		ps->a[i] = ps->a[i + 1];
		i++;
	}
	ps->a[i] = temp;
	write(1, "rra\n", 4);
}