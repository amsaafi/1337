/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 20:59:24 by samsaafi          #+#    #+#             */
/*   Updated: 2023/09/27 20:59:28 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	fac;

	fac = 1;
	while (nb > 0)
	{
		fac = fac * nb;
		nb--;
	}
	while (nb < 0)
		return (0);
	return (fac);
}
