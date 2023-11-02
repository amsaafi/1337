/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 09:42:12 by samsaafi          #+#    #+#             */
/*   Updated: 2023/09/20 22:13:06 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	is_alpha(char c)
{
	if ((c >= '0' && c <= '9') || ((c >= 'A' && c <= 'Z')) || (c >= 'a'
			&& c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	xt;

	i = 0;
	xt = 1;
	while (str[i] != '\0')
	{
		if (is_alpha(str[i]))
		{
			if (xt && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
			else if (!xt && str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32;
			}
			xt = 0;
		}
		else
			xt = 1;
		i++;
	}
	return (str);
}
