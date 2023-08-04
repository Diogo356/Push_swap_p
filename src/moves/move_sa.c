/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_sa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:58:32 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/06/09 18:10:21 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_sa(t_pu_sw *ps)
{
	int	temp;

	if (!(ps->size_a >= 2))
		return ;
	temp = ps->a[ps->size_a - 1];
	ps->a[ps->size_a - 1] = ps->a[ps->size_a - 2];
	ps->a[ps->size_a - 2] = temp;
	write(1, "sa\n", 3);
}
