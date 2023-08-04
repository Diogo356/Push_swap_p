/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbelarmi <dbelarmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:15:19 by dbelarmi          #+#    #+#             */
/*   Updated: 2023/05/24 00:02:12 by dbelarmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

//definindo uma mascara para trabalhar com int max e int min;
# define INT_MAX 2147483647
# define INT_MIN -2147483648

# define ERROR -3

typedef struct s_push_swap
{
    int *a; // armazena os valores da struct 'a' aqui;
    int *b; // armazena os valores da struc 'b' aqui; 
    int size_a; // armazena o topo do 'a' aqui;
    int size_b; // armazena o topo da struct 'b' aqui;
    int aux; // vai ajudar em alguma coisa no meio do caminho;
    int init;
    int error_args;
}   t_pu_sw;

typedef struct s_big
{
    int a;
    int b;
}       t_big;


//aux;
int     search_nb_smaller(t_pu_sw *ps);
int find_index_smallest_nb(int *stack, int stack_size, int portion, int min_range);
void	bigger_to_top(t_pu_sw *ps, unsigned int index_bigger, \
unsigned int size, char stack);

//check
int         check_arguments(int argc, char **argv);
t_pu_sw     *validate_args(int argc, char **argv, t_pu_sw *ps);
void        validate_args_duplicate(t_pu_sw *ps);
int         validate_order(t_pu_sw *ps);
void        change_nb_to_index(t_pu_sw *ps);

//choose;
char *moviment_r_or_rr(t_pu_sw *ps, int *sa, int *sb, t_big big_index);
void    choose_mov(t_pu_sw *ps, int portion);

//find_b
int find_bigger_b(int *stack, int size_s);
int     find_index_previus_in_b(t_pu_sw *ps, int smaller_nb_a);


//move;
void    execution_move(t_pu_sw *ps, char *move);
void    move_pa(t_pu_sw *ps);
void    move_pb(t_pu_sw *ps);
void	move_ra(t_pu_sw *ps);
void    move_rb(t_pu_sw *ps);
void    move_rr(t_pu_sw *ps);
void    move_rra(t_pu_sw *ps);
void    move_rrb(t_pu_sw *ps);
void    move_rrr(t_pu_sw *ps);
void    move_sa(t_pu_sw *ps);
void    move_sb(t_pu_sw *ps);
void    move_ss(t_pu_sw *ps);

//order;
void    order_tree(t_pu_sw *ps);
void    order_five(t_pu_sw *ps);
void order_hundred(t_pu_sw *ps, int division);

//utils
void        exit_and_free(t_pu_sw *ps);
int         ft_isdigit(char *str);
long int	ft_atoi(const char *nptr);
void	    *ft_calloc(size_t nelem, size_t elsize);
int         ft_strcmp(char *s1, char *s2);
size_t      ft_strlen(const char *s);
void        ft_bzero(void *s, size_t n);

#endif