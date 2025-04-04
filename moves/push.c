/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 22:57:24 by mohmajdo          #+#    #+#             */
/*   Updated: 2025/04/04 16:03:31 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stacks **arr_a, t_stacks **arr_b, size_t *size_a, size_t *size_b)
{
	size_t	i;

	if (*size_b == 0)
		return ;
	i = *size_a;
	while (i > 0)
	{
		*arr_a[i] = *arr_a[i - 1];
		i--;
	}
	*arr_a[0] = *arr_b[0];
	i = 0;
	while (i < *size_b - 1)
	{
		*arr_b[i] = *arr_b[i + 1];
		i++;
	}
	(*size_a)++;
	(*size_b)--;
	write (1, "pa\n", 3);
}

void	pb(t_stacks **arr_a, t_stacks **arr_b, size_t *size_a, size_t *size_b)
{
	size_t	i;

	if (*size_a == 0)
		return ;
	i = *size_b;
	while (i > 0)
	{
		*arr_b[i] = *arr_b[i - 1];
		i--;
	}
	*arr_b[0] = *arr_a[0];
	i = 0;
	while (i < *size_a - 1)
	{
		*arr_a[i] = *arr_a[i + 1];
		i++;
	}
	(*size_a)--;
	(*size_b)++;
	write (1, "pb\n", 3);
}
