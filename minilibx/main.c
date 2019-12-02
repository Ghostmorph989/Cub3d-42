/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 20:16:20 by malaoui           #+#    #+#             */
/*   Updated: 2019/11/29 22:52:28 by malaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include 	<mlx.h>
#include	<string.h>
int		main(void)
{
	void	*mlx_ptr;

	mlx_ptr = NULL;
	if (!(mlx_ptr = mlx_init()))
		return (0);
	mlx_new_window (mlx_ptr, 500, 500, "Cub3d --Project-- ");
	mlx_loop(mlx_ptr);
	return (0);
}
