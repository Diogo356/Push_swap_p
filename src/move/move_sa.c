/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_sa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:15:48 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/05/15 14:32:09 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void move_sa(t_pu_sw *ps)
{
    int aux;

    if(ps->size_a >= 2)
        return ;
    aux = ps->a[ps->size_a - 1];
    ps->a[ps->size_a - 1] = ps->a[ps->size_a - 2];
    ps->a[ps->size_a - 2] = aux;
    write(1, "sa\n", 3);
}
