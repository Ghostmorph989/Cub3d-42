/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:16:20 by malaoui           #+#    #+#             */
/*   Updated: 2019/12/03 09:13:23 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libcub3d.h"

int		main(void)
{
	t_lib foo;
	int fd;
	char *line;

	line = NULL;
	foo.map_index = 0;
	foo.map = (char **)malloc(sizeof(char *) * 15);
	fd = open("map.cub", O_RDONLY);
	while (get_next_line(fd, &line) == 1)
		ft_collect_info(&foo, line);
	foo.map[foo.map_index] = NULL;
	ft_display_content(&foo);
	// ft_printf("north :%s, south :%s, west :%s, east :%s, sprite :%s\n", foo.north_path, foo.south_path, foo.west_path, foo.east_path,foo.sprite_path);
	// ft_printf("C :%d,%d,%d\n", foo.r_color, foo.g_color, foo.b_color);
	// ft_printf("F :%d,%d,%d\n", foo.r_fcolor, foo.g_fcolor, foo.b_fcolor);
	// ft_printf("display_x :%d\ndisplay_y :%d\n", foo.display_x, foo.display_y);
	// while (foo.map[i] != '\0')
	// 	ft_printf("%s\n", foo.map[i++]);
	// ft_printf("map index : %d\n", foo.map_index);
	return (0);
}
