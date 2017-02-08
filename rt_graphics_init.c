/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_graphics_init.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 08:44:17 by qle-guen          #+#    #+#             */
/*   Updated: 2017/02/08 12:42:02 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

bool
	rt_graphics_init
	(t_u32_v2 size
	, t_mlx *mlx
	, char *title)
{
	t_i32	ox;

	if (!(mlx->mlx = mlx_init()))
		return (false);
	if (!(mlx->img = mlx_new_image(mlx->mlx, size.x, size.y)))
		return (false);
	if (!(mlx->tex = (t_u32 *)mlx_get_data_addr(mlx->img, &ox, &ox, &ox)))
		return (false);
	if (!(mlx->win = mlx_new_window(mlx->mlx, size.x, size.y, title)))
		return (false);
	return (true);
}
