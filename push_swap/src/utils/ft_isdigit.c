/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:59:56 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/06/10 14:59:12 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if (str[0] == '-' || str[0] == '+' )
			i++;
		while (str[i] >= 48 && str[i] <= 57)
			i++;
		if (str[i] == '\0')
			return (1);
		else
			return (0);
	}
	return (0);
}
