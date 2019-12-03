/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 03:07:03 by malaoui           #+#    #+#             */
/*   Updated: 2019/12/03 09:37:23 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libcub3d.h"

void    ft_draw_cube(int ini_x, int ini_y, t_lib *foo)
{
    int i;
    int j;
    int x;
    int y;

    i = 0;
    j = 0;
    x = foo->display_x / foo->map_index;
	y = foo->display_y / ft_strlen(*(foo->map));
    while (i < x)
    	mlx_pixel_put (foo->mlx_ptr, foo->win_ptr, x*ini_x + i++, y*ini_y, WHITE);
    i = 0;
    while (i < x)
	    mlx_pixel_put (foo->mlx_ptr, foo->win_ptr, x*ini_x + i++, y*ini_y + y, WHITE);
    while (j < y)
	    mlx_pixel_put (foo->mlx_ptr, foo->win_ptr, x*ini_x, y*ini_y + j++, WHITE);
    j = 0;
    while (j < y)
	    mlx_pixel_put (foo->mlx_ptr, foo->win_ptr, x*ini_x + x, y*ini_y + j++, WHITE);
}

void    ft_draw_player(int ini_x, int ini_y, t_lib *foo)
{
	//Field of view 60
	int deta;
    int projection;
    float i;
    float j;
    int a;
    int b;

    a = 0;
    b  = 0;
    i = ini_x;
    j = ini_y;
    deta = 200;
    projection = (90 - deta)/2;
    // charectere pixel
    mlx_pixel_put (foo->mlx_ptr, foo->win_ptr, (foo->display_x/ foo->map_index) * ini_x, (foo->display_y/ ft_strlen(*(foo->map))) * ini_y, WHITE);
    // projection of rays
    while (a < projection)
    {
        //  if (foo->map[(int)i][(int)j] != '1')
        // {
        mlx_pixel_put(foo->mlx_ptr, foo->win_ptr, (foo->display_x/ foo->map_index) * i, (foo->display_y/ ft_strlen(*(foo->map))) * j, WHITE);
        //             break;
        // }
        j += cos(projection);
        i += cos(projection);
        a++;
    }
    i = ini_x * cos(deta + projection);
    j = ini_y * cos(deta + projection);
    a = 0;
    while (a < projection)
    {
        // if (foo->map[(int)i][(int)j] != '1')
        // {
            mlx_pixel_put(foo->mlx_ptr, foo->win_ptr, (foo->display_x/ foo->map_index) * i, (foo->display_y/ ft_strlen(*(foo->map))) * j, RED);
        //     break;
        // }
        i += sin(deta + projection);
        j += sin(deta + projection - 90);
        a++;
    }
}