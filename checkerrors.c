/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerrors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:24:30 by mohmajdo          #+#    #+#             */
/*   Updated: 2025/04/04 09:56:59 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stacks	**ft_alloc(size_t total)
{
	t_stacks	**arr;
	size_t		i;

	i = 0;
	arr = gc_malloc (sizeof(t_stacks *) * total);
	while (i < total)
	{
		arr[i] = gc_malloc (sizeof(t_stacks));
		if (!arr[i])
			return (gc_free_all(), NULL);
		i++;
	}
	if (!arr)
		return (gc_free_all(), NULL);
	return (arr);
}

int	ft_checkerrors(char **buffer, size_t *size, t_stacks **arr)
{
	int		i;
	long	num;

	i = 0;
	while (buffer[i])
	{
		if (!ft_isdegit(buffer[i]))
			return (ft_freebuffer(buffer), 0);
		num = ft_atoi(buffer[i]);
		if (num > INT_MAX || num < INT_MIN)
			return (ft_freebuffer(buffer), 0);
		if (!ft_isduplicate(arr, num, *size))
			return (ft_freebuffer(buffer), 0);
		arr[*size]->data = (int)num;
		arr[*size]->position = *size;
		arr[*size]->index = -1;
		(*size)++;
		i++;
	}
	return (ft_freebuffer(buffer), 1);
}

t_stacks	**ft_check(char **av, size_t *size)
{
	char		**buffer;
	t_stacks	**arr;
	int			i;
	size_t		total;

	i = 1;
	total = ft_countnumbers(av, i);
	*size = 0;
	arr = ft_alloc(total);
	if (!arr)
		return (NULL);
	while (av[i])
	{
		buffer = ft_split(av[i], ' ');
		if (!buffer)
			return (gc_free(arr), NULL);
		if (!ft_checkerrors(buffer, size, arr))
			return (gc_free(arr), NULL);
		i++;
	}
	return (arr);
}
