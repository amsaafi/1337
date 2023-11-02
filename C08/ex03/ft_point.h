/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samsaafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:43:27 by samsaafi          #+#    #+#             */
/*   Updated: 2023/10/03 18:43:37 by samsaafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}		t_point;

void	set_point(t_point *point);

#endif