/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:03:48 by mohmajdo          #+#    #+#             */
/*   Updated: 2025/04/04 15:55:31 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_freebuffer(char **buffer)
{
	int	i;

	i = 0;
	if (buffer == NULL)
		return ;
	while (buffer && buffer[i])
	{
		free(buffer[i]);
		i++;
	}
	free (buffer);
}

int	ft_isdegit(char *buffer)
{
	int	i;

	i = 0;
	if (buffer[i] == '+' || buffer[i] == '-')
		i++;
	while (buffer[i])
	{
		if (buffer[i] > '9' || buffer[i] < '0')
			return (0);
		i++;
	}
	return (1);
}

int	ft_isduplicate(t_stacks **arr, int num, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (arr[i]->data == num)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_countnumbers(char **av, int i)
{
	int	count;
	int	j;

	count = 0;
	while (av[i] != NULL)
	{
		j = 0;
		while (av[i][j])
		{
			while (av[i][j] == ' ')
				j++;
			if (av[i][j] == '+' || av[i][j] == '-')
				j++;
			if (av[i][j] >= '0' && av[i][j] <= '9')
			{
				count++;
				while (av[i][j] >= '0' && av[i][j] <= '9')
					j++;
			}
			else if (av[i][j])
				j++;
		}
		i++;
	}
	return (count);
}

int	ft_getmin(t_stacks **arr, size_t size_a)
{
	int		min;
	size_t	i;

	i = 0;
	if (arr == NULL)
		return (0);
	min = arr[0]->data;
	while (i < size_a)
	{
		if (arr[i]->data < min)
			min = arr[i]->data;
		i++;
	}
	return (min);
}
