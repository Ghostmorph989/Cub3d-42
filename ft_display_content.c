/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_content.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 10:56:18 by malaoui           #+#    #+#             */
/*   Updated: 2019/12/02 11:11:29 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libcub3d.h"

void	ft_display_content(t_lib foo)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (!(foo.mlx_ptr = mlx_init()))
		return ;
	foo.win_ptr = mlx_new_window (foo.mlx_ptr, foo.display_x, foo.display_x, "Cub3d --Project-- ");
	while (i < foo.map_index)
	{
		j = 0;
		while (j < (int )ft_strlen(*(foo.map)))
		{
			if (foo.map[i][j] == 1)
				ft_draw_cube(i, j, &foo);
			else if (foo.map[i][j] == 'N')
				ft_draw_player(i, j, &foo);
			j++;
		}
		i++;
	}
	mlx_loop(foo.mlx_ptr);
}