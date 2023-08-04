/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:48:57 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/06/09 16:56:27 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_arguments(int argc, char **argv)
{
    int i;

    i = 1;
    if(argc >= 2)
    {
        while(i < argc)
        {
            if(ft_isdigit(argv[i]) == 1)
                i++;
            else
            {
                write(2, "Error!\n", 7);
                return (0);//aqui 0 é erro;
            }
        }   
        if(i == argc)
            return (1); // 1 significa que está tudo correto;
    }
    return (0);
}

t_pu_sw *validate_args(int argc, char **argv, t_pu_sw *ps)
{
    int i;
    long int num;
    
    i = 0;
    ps->size_a = argc - 1;
    ps->size_b = 0;
    ps->a = (int *)ft_calloc(sizeof(int *), (argc - 1));
    if(!ps->a)
        exit_and_free(ps);
    while(argc - 1 > 0)
    {
        num = ft_atoi(argv[argc - 1]);
        if((num <= INT_MAX) && (num >= INT_MIN))
            ps->a[i] = (int)num;
        else
            exit_and_free(ps);
        i++;
        argc--;
    }
    return (ps);
}

void validate_args_duplicate(t_pu_sw *ps)
{
    int i;
    int j ;

    i = 0;
    while(i < ps->size_a)
    {
        j = i + 1;
        while(j < ps->size_a)
        {
            if(ps->a[i] == ps->a[j])
                exit_and_free(ps);
            j++;
        }
        i++;
    }
    ps->b = (int *) ft_calloc (sizeof (int), ps->size_a);
	if (!ps->b)
		exit_and_free(ps);
    change_nb_to_index(ps);
}

int  validate_order(t_pu_sw *ps)
{
    int i;

    i = 1; 
    while (i < ps->size_a) {
        if (ps->a[i] < ps->a[i + 1])
            return (0); //retorna erro;
        i++;
    }
    return (1); // retorna que está correto;
}

void	change_nb_to_index(t_pu_sw *ps)
{
	int	i;
	int	check;
	int	index_nb;
	int	*new_sa;

	check = 0;
	new_sa = (int *)ft_calloc(sizeof(int), ps->size_a);
	if (!new_sa)
		exit_and_free(ps);
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