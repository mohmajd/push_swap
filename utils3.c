/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:31:51 by mohmajdo          #+#    #+#             */
/*   Updated: 2025/03/19 00:03:19 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_getmaxpos(t_stacks **arr, size_t size)
{
	int		max;
	size_t	i;
	int		pos;

	i = 0;
	if (arr == NULL)
		return (0);
	max = arr[0]->data;
	while (i < size)
	{
		if (arr[i]->data > max)
		{
			max = arr[i]->data;
			pos = arr[i]->position;
		}
		i++;
	}
	return (pos);
}

int	ft_getminpos(t_stacks **arr, size_t size)
{
	int		min;
	size_t	i;
	int		pos;

	i = 0;
	if (arr == NULL)
		return (0);
	min = arr[0]->data;
	while (i < size)
	{
		if (arr[i]->data < min)
		{
			min = arr[i]->data;
			pos = arr[i]->position;
		}
		i++;
	}
	return (pos);
}

#include <stdio.h>
void	ft_checksize(t_stacks **arr_a, t_stacks **arr_b,
			size_t *size_a, size_t *size_b)
{
	if (*size_a == 2)
		ft_sorttwo(arr_a);
	else if (*size_a == 3)
		ft_sortthree(arr_a, *size_a);
	else if (*size_a == 4)
		ft_sortfour(arr_a, arr_b, size_a, size_b);
	else if (*size_a == 5)
		ft_sortfive(arr_a, arr_b, size_a, size_b);
}
