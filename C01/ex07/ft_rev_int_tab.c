/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 23:59:36 by samsaafi          #+#    #+#             */
/*   Updated: 2023/09/17 10:38:32 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	s;
	int	e;
	int	tmp;

	s = 0;
	e = size - 1;
	while (s < e)
	{
		tmp = tab[s];
		tab[s] = tab[e];
		tab[e] = tmp;
		s++;
		e--;
	}
}
