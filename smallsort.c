/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallsort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:29:59 by mohmajdo          #+#    #+#             */
/*   Updated: 2025/04/04 09:58:41 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sorttwo(t_stacks **arr)
{
	if (arr[0]->data > arr[1]->data)
		sa(arr);
}

void	ft_sortthree(t_stacks **arr, int size_a)
{
	int	max;
	int	i;
	int	j;

	max = ft_getmax(arr, size_a);
	i = arr[0]->data;
	j = arr[1]->data;
	if (max == i)
	{
		ra(arr, size_a);
		ft_sorttwo(arr);
	}
	else if (max == j)
	{
		rra(arr, size_a);
		ft_sorttwo(arr);
	}
	else
		ft_sorttwo(arr);
}

void	ft_sortfour(t_stacks **arr, t_stacks **tab,
			size_t *size_a, size_t *size_b)
{
	int	min;

	min = ft_getmin(arr, *size_a);
	if (min == arr[0]->data)
		pb(arr, tab, size_a, size_b);
	else if (min == arr[1]->data)
	{
		sa(arr);
		pb(arr, tab, size_a, size_b);
	}
	else if (min == arr[2]->data)
	{
		rra(arr, *size_a);
		rra(arr, *size_a);
		pb(arr, tab, size_a, size_b);
	}
	else
	{
		rra(arr, *size_a);
		pb(arr, tab, size_a, size_b);
	}
	ft_sortthree(arr, *size_a);
	pa(arr, tab, size_a, size_b);
}

static void	push_smalltob(t_stacks **arr_a, t_stacks **arr_b,
				size_t *size_a, size_t *size_b)
{
	int	min;

	min = ft_getmin(arr_a, *size_a);
	if (min == arr_a[1]->data)
		sa(arr_a);
	else if (min == arr_a[2]->data)
	{
		ra(arr_a, *size_a);
		ra(arr_a, *size_a);
	}
	else if (min == arr_a[3]->data)
	{
		rra(arr_a, *size_a);
		rra(arr_a, *size_a);
	}
	else if (min == arr_a[4]->data)
		rra(arr_a, *size_a);
	pb(arr_a, arr_b, size_a, size_b);
}

void	ft_sortfive(t_stacks **arr, t_stacks **arr_b,
			size_t *size_a, size_t *size_b)
{
	push_smalltob(arr, arr_b, size_a, size_b);
	ft_sortfour(arr, arr_b, size_a, size_b);
	pa(arr, arr_b, size_a, size_b);
}
