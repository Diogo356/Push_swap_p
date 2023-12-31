/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_ss.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:58:42 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/06/10 14:45:41 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_ss(t_pu_sw *ps)
{
	int	temp;

	if (!(ps->size_a >= 2) || !(ps->size_b >= 2))
		return ;
	temp = ps->a[ps->size_a - 1];
	ps->a[ps->size_a - 1] = ps->a[ps->size_a - 2];
	ps->a[ps->size_a - 2] = temp;
	temp = ps->b[ps->size_b - 1];
	ps->b[ps->size_b - 1] = ps->b[ps->size_b - 2];
	ps->b[ps->size_b - 2] = temp;
	write(1, "ss\n", 3);
}
