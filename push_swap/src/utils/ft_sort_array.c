/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:59:50 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/06/09 16:59:51 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_array(int *tab, int size)
{
	int	k;
	int	i;
	int	temp;

	k = 0;
	while (k < size - 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab [i + 1])
			{
				temp = tab [i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		k++;
	}
}
