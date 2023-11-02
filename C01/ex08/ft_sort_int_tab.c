/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 11:43:45 by samsaafi          #+#    #+#             */
/*   Updated: 2023/09/17 11:59:46 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	s;
	int	i;
	int	tmp;

	s = 1;
	while (s == 1)
	{
		s = 0;
		i = 1;
		while (i < size)
		{
			if (tab[i - 1] > tab[i])
			{
				tmp = tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = tmp;
				s = 1;
			}
			i++;
		}
	}
}
