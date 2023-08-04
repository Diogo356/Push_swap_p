/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 21:24:00 by maclara-          #+#    #+#             */
/*   Updated: 2023/06/10 18:36:40 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

# define ERROR -3

typedef struct s_division
{
	int	min;
	int	max;
	int	half;
}	t_div;

typedef struct s_big_index
{
	int	a;
	int	b;
}	t_big_i;

typedef struct s_pu_sw
{
	int	*a;
	int	*b;
	int	size_a;
	int	size_b;
	int	temp;
}	t_pu_sw;

// aux.c
unsigned int	find_index_smaller_a(t_pu_sw *ps);
unsigned int	find_index_bigger(int *stack, int size_s);
int				find_predecessor_in_b(t_pu_sw *ps, int nb);
void			bigger_to_top(t_pu_sw *ps, unsigned int index_bigger, \
unsigned int size, char stack);
int				near_pos_to_move(int *stack, int stack_size, \
int range, int min_range);

// utils
void			ft_exit(t_pu_sw *ps);
void			free_struct(t_pu_sw *ps);
int				ft_isdigit(char *str);
void			ft_sort_array(int *tab, int size);
long int		ft_atoi(const char *nptr);
int				*ft_array_dup(int *arr, int size);
int				ft_strcmp(char *s1, char *s2);
void			*ft_calloc(size_t nmemb, size_t size);

//check.c
int				check_arguments(int argc, char **argv);
t_pu_sw			*validate_args(int argc, char **argv, t_pu_sw *ps);
void			validate_args_duplicate(t_pu_sw *ps);
void			switch_to_index(t_pu_sw *ps);
int				validate_order(t_pu_sw *ps);

//move
void			move_sa(t_pu_sw *ps);
void			move_sb(t_pu_sw *ps);
void			move_ss(t_pu_sw *ps);
void			move_pa(t_pu_sw *ps);
void			move_pb(t_pu_sw *ps);
void			move_ra(t_pu_sw *ps);
void			move_rb(t_pu_sw *ps);
void			move_rr(t_pu_sw *ps);
void			move_rra(t_pu_sw *ps);
void			move_rrb(t_pu_sw *ps);
void			move_rrr(t_pu_sw *ps);
void			execution_move(t_pu_sw *ps, char *move);

// order
void			sort_three(t_pu_sw *ps);
void			sort_five(t_pu_sw *ps);
void			sort_hundred(t_pu_sw *ps, int division);
void			sort_large_numbers(t_pu_sw *ps);

// choose_mov
char			*move_r_or_rr(t_pu_sw *ps, int *sa, int *sb, t_big_i big_index);
void			choose_move(t_pu_sw *ps, int range);

// portion_larger_number
t_div			info_portion_a(t_pu_sw *ps, t_div portion);
t_div			info_portion_b(t_pu_sw *ps, t_div portion);
t_div			re_info_portion_a(t_pu_sw *ps, t_div portion);
void			move_in_portion(char stack, t_pu_sw *ps, t_div portion);

#endif
