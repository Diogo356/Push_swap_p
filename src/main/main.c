/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:13:28 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/05/23 23:08:09 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void init_struct(t_pu_sw *ps)
{
    ps->a = 0;
    ps->b = 0;
    ps->size_a = 0;
    ps->size_b = 0;
    ps->aux = 0;
    ps->init = 0;
    ps->error_args = 0;
}

static void	free_struct(t_pu_sw *ps)
{
	if (ps->a)
		free(ps->a);
	if (ps->b)
		free(ps->b);
}


int main(int argc, char **argv)
{
    t_pu_sw ps;

    init_struct(&ps);
    if(check_arguments(argc, argv) == 0)
        return (-1);
    validate_args(argc, argv, &ps);
    validate_args_duplicate(&ps);
    if(validate_order(&ps) == 1)
       return(-1);
    if(argc < 5)
        order_tree(&ps);
    if(argc <= 6)
        order_five(&ps);
    else if(argc <= 101)
        order_hundred(&ps, (float)ps.size_a / 5);
    // for(int i = 0; i <= ps.size_a; i++)
    //     printf("teste: %i\n", ps.a[ps.size_a - i]);
    // printf("\nvalor: %i \n", ps.size_a);
    free_struct(&ps);
    return (0);
}