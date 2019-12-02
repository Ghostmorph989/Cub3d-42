/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 03:07:03 by malaoui           #+#    #+#             */
/*   Updated: 2019/12/02 11:08:09 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libcub3d.h"

void    ft_draw_cube(int ini_x, int ini_y, t_lib *foo)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < foo->display_x)
    	mlx_pixel_put (foo->mlx_ptr, foo->win_ptr, foo->display_x*ini_x + i++, foo->display_y*ini_y, WHITE);
    i = 0;
    while (i < foo->display_x)
	    mlx_pixel_put (foo->mlx_ptr, foo->win_ptr, foo->display_x* ini_x + i++, foo->display_y*ini_y + foo->display_y, 16777215);
    while (j < foo->display_y)
	    mlx_pixel_put (foo->mlx_ptr, foo->win_ptr, foo->display_x* ini_x, foo->display_y*ini_y + j++, 16777215);
    j = 0;
    while (j < foo->display_y)
	    mlx_pixel_put (foo->mlx_ptr, foo->win_ptr, foo->display_x*ini_x + foo->display_x, foo->display_x*ini_y + j++, 16777215);
}

void    ft_draw_player(int ini_x, int ini_y, t_lib *foo)
{
    mlx_pixel_put (foo->mlx_ptr, foo->win_ptr, foo->display_x * ini_x, foo->display_y * ini_y, WHITE);
}