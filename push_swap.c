/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 13:31:13 by mohmajdo          #+#    #+#             */
/*   Updated: 2025/03/20 16:59:24 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_givepos(t_stacks **arr, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		arr[i]->position = i;
		i++;
	}
}

void	ft_getindex(t_stacks **arr, size_t size_a)
{
	size_t	i;
	size_t	j;
	int		max;
	int		max_pos;

	i = size_a;
	while (i > 0)
	{
		max = INT_MIN;
		max_pos = -1;
		j = 0;
		while (j < size_a)
		{
			if (arr[j]->index == -1 && arr[j]->data > max)
			{
				max = arr[j]->data;
				max_pos = j;
			}
			j++;
		}
		if (max_pos != -1)
			arr[max_pos]->index = i;
		i--;
	}
}

void	push_all_to_b(t_stacks **arr_a, t_stacks **arr_b,
			size_t *size_a, size_t *size_b)
{
	int		x;
	int		i;
	size_t	size;

	size = *size_a;
	i = 0;
	x = 16;
	if (*size_a > 100)
		x = 36;
	while ((size_t)i < size)
	{
		if (arr_a[i]->index <= i)
		{
			pb(arr_a, arr_b, size_a, size_b);
			i++;
		}
		else if (arr_a[i]->index <= (i + x))
		{
			
			pb(arr_a, arr_b, size_a, size_b);		
			rb(arr_b, *size_b);
			i++;
		}
		else
		{
			ra(arr_a, *size_a);
		}
		// i++;
	}
}

void	rotate(size_t max, size_t size_b, t_stacks **arr)
{
	if (max < (size_b / 2))
	{
		while (max > 0)
		{
			rb(arr, size_b);
			max--;
		}
	}
	else if (max >= (size_b / 2))
	{
		while (max < size_b)
		{
			rrb(arr, size_b);
			max++;
		}
	}
}
#include <stdio.h>
void	ft_push_to_a(t_stacks **arr_a, t_stacks **arr_b,
			size_t *size_a, size_t *size_b)
{
	size_t			i;
	size_t			max;
	size_t			size;

	size = *size_b;
	i = 0;
	while (i < size)
	{
		ft_givepos(arr_b, *size_b);
		max = ft_getmaxpos(arr_b, *size_b);
		rotate(max, *size_b, arr_b);
		pa(arr_a, arr_b, size_a, size_b);
		i++;
	}
}
