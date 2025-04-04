/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 20:14:24 by mohmajdo          #+#    #+#             */
/*   Updated: 2025/04/04 15:53:38 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stacks	**arr_a;
	t_stacks	**arr_b;
	size_t		size_a;
	size_t		size_b;

	if (ac <= 1)
		return (0);
	size_b = 0;
	arr_a = ft_check(av, &size_a);
	if (arr_a == NULL)
		return (write(2, "Error\n", 6));
	arr_b = ft_alloc(size_a);
	if (arr_b == NULL)
		return (ft_free(arr_a, size_a), write(2, "Error\n", 6), 0);
	if (ft_issorted(size_a, arr_a))
		return (ft_free(arr_a, size_a), ft_free(arr_b, size_a), 0);
	if (size_a <= 5)
		ft_checksize(arr_a, arr_b, &size_a, &size_b);
	if (size_a > 5)
	{
		ft_getindex(arr_a, size_a);
		push_all_to_b(arr_a, arr_b, &size_a, &size_b);
		ft_push_to_a(arr_a, arr_b, &size_a, &size_b);
	}
	return (ft_free(arr_a, size_a), ft_free(arr_b, size_a), 0);
}
