/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:59:44 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/06/09 16:59:45 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_bzero(void *s, size_t n)
{
	int	i;

	i = 0;
	while (n && s)
	{
		*(unsigned char *)(s + i) = '\0';
		i++;
		n--;
	}
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	aux;
	void	*tab;

	if (nmemb == 0)
		return (NULL);
	if (nmemb > 2147483647 || size > 2147483647 || size * nmemb > 2147483647)
		return (NULL);
	aux = (size) * (nmemb);
	tab = malloc(aux);
	if (tab == NULL)
		return (NULL);
	ft_bzero(tab, aux);
	return (tab);
}
