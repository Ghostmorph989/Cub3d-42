/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libcub3d.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 08:39:01 by malaoui           #+#    #+#             */
/*   Updated: 2019/12/02 11:11:04 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     LIBCUB3D_H
# define    LIBCUB3D_H
# define WHITE 16777215
# define  BUFFER_SIZE 6
# include "libft/libft.h"
# include "ft_printf/libftprintf.h"
# include "get_next_line/get_next_line.h"
# include "math.h"
# include <mlx.h>
# include<string.h>

typedef struct s_lib
{
    // Resolution : R num num
    int display_x;
    int display_y;
    // North texture :  NO ./path
    char *north_path;
    // South texture :  SO ./path
    char *south_path;
    // West texture :   WE ./path
    char *west_path;
    // East texture :   EA ./path
    char *east_path;
    // Sprite texture : S ./path
    char *sprite_path;
    // FLoor color :    F num,num,num
    int r_fcolor;
    int g_fcolor;
    int b_fcolor;
    // Ceilling color : C num,num.num
    int r_color;
    int g_color;
    int b_color;
    // Map Texture;
    char **map;
    int map_index;
    // mlx_ptr
    void *mlx_ptr;
    // mlx_win
    void *win_ptr;
}               t_lib;

void    ft_draw_cube(int ini_x, int ini_y, t_lib *foo);
void    ft_draw_player(int ini_x, int ini_y, t_lib *foo);
void    ft_collect_info(t_lib *foo, char *str);
void	ft_display_content(t_lib foo);
#endif