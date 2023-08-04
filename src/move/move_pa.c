/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_pa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 20:11:27 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/05/18 20:39:30 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void move_pa(t_pu_sw *ps)
{
    int i;

    i = 0;
    if(!(ps->size_b >= 1))
        return ;
    ps->size_a++;//aumenta o espaço da stack a;
    ps->a[i] = ps->b[ps->size_b];// oque tiver no topo da stack b, vai pro topo da stack a;
    ps->size_b--; // stack b diminui o tamanho;
    write(1, "pa\n", 3);
}