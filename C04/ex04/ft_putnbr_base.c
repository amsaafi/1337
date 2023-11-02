/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 08:59:56 by samsaafi          #+#    #+#             */
/*   Updated: 2023/09/25 09:00:34 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_baselen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

int	base_isvalid(char *c)
{
	int	i;
	int	j;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] <= 1 || c[i] == '\0' || c[i] == '+' || c[i] == '-')
			return (0);
		j = i + 1;
		while (c[j] != '\0')
		{
			if (c[i] == c[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	isvalid;
	int	baselen;

	baselen = ft_baselen(base);
	isvalid = base_isvalid(base);
	if (isvalid)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr *= -1;
		}
		if (nbr < baselen)
			write(1, &base[nbr], 1);
		else
		{
			ft_putnbr_base(nbr / baselen, base);
			write(1, &base[nbr % baselen], 1);
		}
	}
}
