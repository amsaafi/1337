/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:02:58 by samsaafi          #+#    #+#             */
/*   Updated: 2023/09/26 10:03:02 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (argc > 1)
	{
		while (argv[--argc] != NULL)
		{
			if (argc > 0)
			{
				i = 0;
				while (argv[argc][i] != '\0')
				{
					write(1, &argv[argc][i], 1);
					i++;
				}
				write(1, "\n", 1);
			}
		}
	}
}
