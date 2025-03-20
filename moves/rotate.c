/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:59:13 by mohmajdo          #+#    #+#             */
/*   Updated: 2025/03/19 01:52:51 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stacks **arr, size_t size_a)
{
	size_t		i;
	t_stacks	*tmp;

	if (size_a <= 1)
		return ;
	i = 0;
	tmp = arr[0];
	while (i < size_a - 1)
	{
		arr[i] = arr[i + 1];
		i++;
	}
	arr[i] = tmp;
	write(1, "ra\n", 3);
}

void	rb(t_stacks **arr, size_t size_b)
{
	size_t		i;
	t_stacks	*tmp;

	if (size_b <= 1)
		return ;
	i = 0;
	tmp = arr[0];
	while (i < size_b - 1)
	{
		arr[i] = arr[i + 1];
		i++;
	}
	arr[i] = tmp;
	write(1, "rb\n", 3);
}

void	rra(t_stacks **arr, size_t size_a)
{
	int			i;
	t_stacks	*tmp;

	if (size_a <= 1)
		return ;
	i = size_a - 1;
	tmp = arr[i];
	while (i > 0)
	{
		arr[i] = arr[i - 1];
		i--;
	}
	arr[0] = tmp;
	write(1, "rra\n", 4);
}

void	rrb(t_stacks **arr, size_t size_b)
{
	int			i;
	t_stacks	*tmp;

	if (size_b <= 1)
		return ;
	i = size_b - 1;
	tmp = arr[i];
	while (i > 0)
	{
		arr[i] = arr[i - 1];
		i--;
	}
	arr[0] = tmp;
	write(1, "rrb\n", 4);
}
