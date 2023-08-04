/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:57:47 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/06/10 18:44:56 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_struct(t_pu_sw *ps)
{
	ps->b = NULL;
	ps->size_b = 0;
}

int	main(int argc, char *argv[])
{
	t_pu_sw	ps;

	init_struct(&ps);
	if (check_arguments(argc, argv) == 0)
		return (-1);
	validate_args(argc, argv, &ps);
	validate_args_duplicate(&ps);
	if (argc < 4)
		sort_three(&ps);
	if (argc < 7)
		sort_five(&ps);
	if (argc < 101)
		sort_hundred(&ps, (float)ps.size_a / 5);
	else
	{
		if (validate_order(&ps))
		{
			free_struct(&ps);
			return (-1);
		}
		sort_large_numbers(&ps);
	}
	free_struct(&ps);
	return (0);
}
