/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:43:57 by samsaafi          #+#    #+#             */
/*   Updated: 2023/10/03 18:44:00 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	unsigned int	len;
	char			*new_str;

	len = ft_strlen(src);
	new_str = (char *)malloc(len + 1);
	if (new_str == NULL)
		return (NULL);
	ft_strcpy(new_str, src);
	return (new_str);
}

void	alloc(t_stock_str *result, char **av, int ac)
{
	int	i;

	i = 0;
	while (i < ac)
	{
		result[i].size = ft_strlen(av[i]);
		result[i].str = av[i];
		result[i].copy = ft_strdup(av[i]);
		if (result[i].copy == NULL)
		{
			while (i > 0)
			{
				free(result[i - 1].copy);
				i--;
			}
			free(result);
			return ;
		}
		i++;
	}
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;

	result = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (result == NULL)
		return (NULL);
	alloc(result, av, ac);
	result[ac].str = 0;
	return (result);
}
