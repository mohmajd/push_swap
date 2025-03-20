/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:55:58 by mohmajdo          #+#    #+#             */
/*   Updated: 2025/03/17 15:58:56 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stacks **arr)
{
	t_stacks	*tmp;

	tmp = arr[0];
	arr[0] = arr[1];
	arr[1] = tmp;
	write(1, "sa\n", 3);
}

void	sb(t_stacks **arr)
{
	t_stacks	*tmp;

	tmp = arr[0];
	arr[0] = arr[1];
	arr[1] = tmp;
	write(1, "sb\n", 3);
}
