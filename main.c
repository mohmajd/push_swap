/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohmajdo <mohmajdo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 20:14:24 by mohmajdo          #+#    #+#             */
/*   Updated: 2025/03/20 15:27:31 by mohmajdo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
void print_stack(t_stacks	**arr_a, size_t size)
{
	size_t i = 0;
	
	printf("-------------------\n");
	while (i < size) {
		printf("data %d  pos %d index %d\n", arr_a[i]->data, arr_a[i]->position,arr_a[i]->index);
		i++;
	}
	printf("-------------------\n");	
	


}
int	main(int ac, char **av)
{
	t_stacks	**arr_a;
	t_stacks	**arr_b;
	size_t		size_a;
	size_t		size;
	size_t		size_b;

	if (ac <= 1)
		return (0);
	size_b = 0;
	arr_a = ft_check(av, &size_a);

	size = size_a;
	(void)size;
	if (arr_a == NULL)
		return (write(2, "Error1\n", 6));
	arr_b = ft_alloc(size_a);
	if (arr_b == NULL)
		return (ft_freestructe(arr_a, size_a), write(2, "Error2\n", 6), 0);
	if (ft_issorted(size_a, arr_a))
		return (ft_freestructe(arr_a, size_a),
			ft_freestructe(arr_b, size_a), 0);
	if (size_a <= 5)
		ft_checksize(arr_a, arr_b, &size_a, &size_b);
	if (size_a > 5)
	{
		ft_getindex(arr_a, size_a);
		// print_stack(arr_a, size_a);
		push_all_to_b(arr_a, arr_b, &size_a, &size_b);
		// print_stack(arr_a, size_a);
		ft_push_to_a(arr_a, arr_b, &size_a, &size_b);
		// print_stack(arr_a, size_a);
		// exit (0);
		// return (0);
	}
	gc_free_all();
}
