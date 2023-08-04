/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 20:39:27 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/05/11 17:28:56 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(char *str)
{
	int i;

	i = 0;
	if(str[i] == '\0')
		return (0); // significa erro
	while(str[i] && str[i] != '\0')
	{
		if(str[i] == '-' || str[i] == '+')
			i++;
		while(str[i] == ' ')
			i++;
		while(str[i] >= 48 && str[i] <= 57)
			i++;
		if(str[i] == '\0')
			return(1); // significa certo que está tudo correto;
		else
			return(0); // significa erro;
	}
	return (0); // siginifica erro;
}
