/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 20:38:52 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/05/10 16:32:56 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h" 

long int	ft_atoi(const char *nptr)
{
	long int	num;
	int			i;
	int			sign;

	sign = 1;
	num = 0;
	i = 0;
	if(!nptr[i])
		return(0);
	while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t' || \
	nptr[i] == '\f' || nptr[i] == '\v' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		num = (num * 10) + (nptr[i] - 48);
		i++;
	}
	return (num * sign);
}
