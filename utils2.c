/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:30:10 by mohmajdo          #+#    #+#             */
/*   Updated: 2025/03/18 23:51:27 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

long	ft_atoi(char *str)
{
	int		i;
	int		j;
	long	r;

	i = 0;
	j = 0;
	r = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j = 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && r < 2147483649)
	{
		r = (r * 10) + str[i] - '0';
		str++;
	}
	if (j == 0)
		return (r);
	return (-r);
}

int	ft_issorted(size_t size_a, t_stacks **arr_a)
{
	size_t	i;

	i = 0;
	while (i < size_a - 1)
	{
		if (arr_a[i]->data > arr_a[i + 1]->data)
			break ;
		if (i == size_a - 2)
			return (1);
		i++;
	}
	return (0);
}

int	ft_getmax(t_stacks **arr, size_t size_a)
{
	int		max;
	size_t	i;

	i = 0;
	if (arr == NULL)
		return (0);
	max = arr[0]->data;
	while (i < size_a)
	{
		if (arr[i]->data > max)
			max = arr[i]->data;
		i++;
	}
	return (max);
}
#include "stdio.h"

void	ft_freestructe(t_stacks **arr, size_t total)
{
	size_t	i;

	i = 0;
	//printf("add = %p\n", arr);
	while (i < total)
	{
		//printf("add[%lu] = %p\n", i, arr[i]);
		free(arr[i]);
		i++;
	}
	free(arr);
	//printf("-----------------------------------\n\n");
}
