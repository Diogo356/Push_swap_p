/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   portion_info.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:58:46 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/06/09 18:06:56 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_div	info_portion_a(t_pu_sw *ps, t_div portion)
{
	portion.min = portion.max;
	if (portion.max == 0)
		portion.max = (ps->size_a + ps->size_b) / 2;
	else if (portion.max < (ps->size_a + ps->size_b) - \
	(ps->size_a + ps->size_b) / 24)
		portion.max = portion.max + portion.max / 2;
	else
		portion.max = ps->size_a + ps->size_b;
	portion.half = portion.min + (portion.max - portion.min) / 2;
	return (portion);
}

t_div	info_portion_b(t_pu_sw *ps, t_div portion)
{
	portion.max = portion.min;
	if (portion.max == 0)
		portion.max = (ps->size_a + ps->size_b);
	portion.min = portion.min - (ps->size_a + ps->size_b) / 12;
	if (portion.min > (ps->size_a + ps->size_b))
		portion.min = 0;
	portion.half = portion.min + (portion.max - portion.min) / 2;
	return (portion);
}

t_div	re_info_portion_a(t_pu_sw*ps, t_div portion)
{
	portion.min = portion.max;
	if (portion.min == (ps->size_a + ps->size_b) / 48)
		portion.min = 0;
	portion.max = portion.max + ((ps->size_a + ps->size_b) / 48);
	portion.half = portion.min + (portion.max - portion.min) / 2;
	return (portion);
}
