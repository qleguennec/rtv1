/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_events_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 08:51:10 by qle-guen          #+#    #+#             */
/*   Updated: 2017/02/08 09:32:04 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

bool
	rt_events_init
	(t_rt *rt)
{
	t_mlx	*mlx;

	mlx = &rt->mlx;
	mlx_hook(mlx->win
		, DestroyNotify
		, StructureNotifyMask
		, (int (*)(void))&rt_exit, mlx);
	mlx_hook(mlx->win
		, KeyPress
		, 0
		, (int (*)(t_i32, void *))&rt_events_keyboard
		, rt);
	return (true);
}