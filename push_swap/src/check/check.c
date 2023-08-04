/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:57:25 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/06/10 19:19:22 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_arguments(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc >= 2)
	{
		while (i < argc)
		{
			if (ft_isdigit(argv[i]) == 1)
				i++;
			else
			{
				write(2, "Error\n", 6);
				return (0);
			}
		}
		if (i == argc)
			return (1);
	}
	return (0);
}

t_pu_sw	*validate_args(int argc, char **argv, t_pu_sw *ps)
{
	int			i;
	long int	num;

	i = 0;
	ps->size_a = argc - 1;
	ps->a = (int *) ft_calloc (sizeof (int), (argc - 1));
	if (!ps->a)
		ft_exit(ps);
	while (argc - 1 > 0)
	{
		num = ft_atoi(argv[argc - 1]);
		if (num <= 2147483647 && (num >= -2147483648))
			ps->a[i] = (int)num;
		else
			ft_exit(ps);
		i++;
		argc--;
	}
	return (ps);
}

void	validate_args_duplicate(t_pu_sw *ps)
{
	int	i;
	int	check;

	i = 0;
	while (i < ps->size_a)
	{
		check = i + 1;
		while (check < ps->size_a)
		{
			if (ps->a[i] == ps->a[check])
				ft_exit(ps);
			check++;
		}
		i++;
	}
	ps->b = (int *) ft_calloc (sizeof (int), ps->size_a);
	if (!ps->b)
		ft_exit(ps);
	switch_to_index(ps);
}

void	switch_to_index(t_pu_sw *ps)
{
	int	i;
	int	check;
	int	index_nb;
	int	*new_sa;

	check = 0;
	new_sa = (int *)ft_calloc(ps->size_a, sizeof(int));
	if (!new_sa)
		ft_exit(ps);
	while (check < ps->size_a)
	{
		i = 0;
		index_nb = 0;
		while (i < ps->size_a)
		{
			if (ps->a[i] < ps->a[check])
				index_nb++;
			i++;
		}
		new_sa[check] = index_nb;
		check++;
	}
	free(ps->a);
	ps->a = new_sa;
}

int	validate_order(t_pu_sw *ps)
{
	int	i;

	i = 0;
	while (i < ps->size_a)
	{
		if (ps->a[i] < ps->a[i + 1])
			return (0);
		i++;
	}
	return (1);
}
