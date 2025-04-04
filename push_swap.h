/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 20:14:33 by mohmajdo          #+#    #+#             */
/*   Updated: 2025/04/04 16:04:21 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stacks
{
	int	data;
	int	index;
	int	position;
}t_stacks;

void		pa(t_stacks **arr_a, t_stacks **arr_b,
				size_t *size_a, size_t *size_b);
void		pb(t_stacks **arr_a, t_stacks **arr_b,
				size_t *size_a, size_t *size_b);
void		sa(t_stacks **stacks);
void		sa(t_stacks **stacks);
void		ra(t_stacks **arr, size_t size_a);
void		rb(t_stacks **arr, size_t size_b);
void		rra(t_stacks **arr, size_t size_a);
void		rrb(t_stacks **arr, size_t size_b);

int			ft_checkerrors(char **buffer, size_t *size, t_stacks **arr);
int			ft_getmaxpos(t_stacks **arr, size_t size);
void		ft_givepos(t_stacks **arr, size_t size);
t_stacks	**ft_check(char **av, size_t *size);
t_stacks	**ft_alloc(size_t total);

void		ft_getindex(t_stacks **arr, size_t size_a);
void		push_all_to_b(t_stacks **arr, t_stacks **tab,
				size_t *size_a, size_t *size_b);
void		rotate(size_t max, size_t size_b, t_stacks **arr);
void		ft_push_to_a(t_stacks **arr_a, t_stacks **arr_b,
				size_t *size, size_t *size_b);
int			ft_issorted(size_t size_a, t_stacks **arr_a);
int			ft_isduplicate(t_stacks **arr, int num, size_t size);
void		ft_free(t_stacks **arr, size_t total);
int			ft_strlen(char *str);
long		ft_atoi(char *str);
int			ft_isdegit(char *buffer);
void		ft_freebuffer(char **buffer);
int			ft_countnumbers(char **av, int i);
char		**ft_split(char *str, int c);
int			ft_getmax(t_stacks **arr, size_t size_a);
void		ft_sorttwo(t_stacks **arr);
void		ft_sortthree(t_stacks **arr, int size_a);
void		ft_sortfour(t_stacks **arr, t_stacks **tab,
				size_t *size_a, size_t *size_b);
void		ft_sortfive(t_stacks **arr, t_stacks **tab,
				size_t *size_a, size_t *size_b);
void		ft_checksize(t_stacks **arr_a, t_stacks **arr_b,
				size_t *size_a, size_t *size_b);
int			ft_getmin(t_stacks **arr, size_t size_a);

#endif
