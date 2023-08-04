/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_sb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:58:37 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/06/10 14:45:39 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_sb(t_pu_sw *ps)
{
	int	temp;

	if (!(ps->size_b >= 2))
		return ;
	temp = ps->b[ps->size_b - 1];
	ps->b[ps->size_b - 1] = ps->b[ps->size_b - 2];
	ps->b[ps->size_b - 2] = temp;
	write(1, "sb\n", 3);
}
