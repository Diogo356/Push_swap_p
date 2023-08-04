/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_dup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:59:33 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/06/09 16:59:34 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_array_dup(int *arr, int size)
{
	int	*arr_cpy;
	int	i;

	i = 0;
	arr_cpy = (int *) malloc (sizeof(int) * size);
	while (i < size)
	{
		arr_cpy[i] = arr[i];
		i++;
	}
	return (arr_cpy);
}
