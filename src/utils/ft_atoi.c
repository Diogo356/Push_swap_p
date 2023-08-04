/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atolongi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:59:39 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/06/09 16:59:39 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_atoi(const char *nptr)
{
	int			i;
	int			signal;
	long int	nb;

	i = 0;
	signal = 1;
	nb = 0;
	if (!nptr[i])
		return (0);
	while ((nptr[i] == '\t') || (nptr[i] == '\v') || (nptr[i] == '\f') || \
	(nptr[i] == '\n') || (nptr[i] == '\r') || (nptr[i] == ' '))
		i = i + 1;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			signal *= -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		nb = (nb * 10) + (nptr[i] - 48);
		i++;
	}
	return (nb * signal);
}
