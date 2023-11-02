/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:33:17 by samsaafi          #+#    #+#             */
/*   Updated: 2023/10/01 15:33:24 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	size = max - min;
	result = (int *)malloc(size * sizeof(int));
	if (result == NULL)
		return (-1);
	while (i < size)
	{
		result[i] = min + i;
		i++;
	}
	*range = result;
	return (size);
}
