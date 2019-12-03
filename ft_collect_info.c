/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collect_info.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <malaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 06:15:30 by malaoui           #+#    #+#             */
/*   Updated: 2019/12/03 01:18:25 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libcub3d.h"

char    *ft_handle_map(char *str)
{
    int i;
    int cpt;
    char *dup;
    int j;

    j = 0;
    cpt = 0;
    i = 0;
    dup = NULL;
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
            cpt++;
        i++;
    }
    dup = (char *)malloc(sizeof(char ) * cpt + 1);
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] != ' ')
            dup[j++] = str[i];
        i++;
    }
    dup[j] = '\0';
    return (dup);
}

void    ft_collect_info(t_lib *foo, char *str)
{
    int i;

    i = 0;
        if (str[i] == 'R')
        {
            i += 2;
            foo->display_x = ft_atoi(str + i);
            while (ft_isdigit(str[i]))
                i++;
            foo->display_y = ft_atoi(str + i);
        }
        else if (str[i] == 'F')
        {
            i += 2;
            foo->r_fcolor = ft_atoi(str + i);
            while (ft_isdigit(str[i]))
                i++;
            if (str[i] == ',')
                i++;
            foo->g_fcolor = ft_atoi(str + i);
             while (ft_isdigit(str[i]))
                i++;
            if (str[i] == ',')
                i++;
            foo->b_fcolor = ft_atoi(str + i);
        }
        else if (str[i] == 'C')
        {
            i += 2;
            foo->r_color = ft_atoi(str + i);
            while (ft_isdigit(str[i]))
                i++;
            if (str[i] == ',')
                i++;
            foo->g_color = ft_atoi(str + i);
             while (ft_isdigit(str[i]))
                i++;
            if (str[i] == ',')
                i++;
            foo->b_color = ft_atoi(str + i);
        }
        else if (ft_memcmp(str, "NO", 2) == 0)
            foo->north_path = ft_substr(str, 3, ft_strlen(str));
        else if (ft_memcmp(str, "SO", 2) == 0)
            foo->south_path = ft_substr(str, 3, ft_strlen(str));
        else if (ft_memcmp(str, "WE", 2) == 0)
            foo->west_path = ft_substr(str, 3, ft_strlen(str));
        else if (ft_memcmp(str, "EA", 2) == 0)
            foo->east_path = ft_substr(str, 3, ft_strlen(str));
        else if (str[i] == 'S')
            foo->sprite_path = ft_substr(str, 2, ft_strlen(str));
        else if (ft_isdigit(str[i]))
            foo->map[foo->map_index++] = ft_handle_map(str);
        else 
            ft_printf("Try again with a valid file");
        return ;
}