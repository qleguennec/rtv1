/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_events_keyboard.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 08:56:38 by qle-guen          #+#    #+#             */
/*   Updated: 2017/02/08 09:32:50 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

#define KEY(a) (key == kVK_ ## a)

void
	rt_events_keyboard
	(t_i32 key
	, t_rt *rt)
{
	t_mlx	*mlx;

	mlx = &rt->mlx;
	if (KEY(Escape))
		rt_exit(mlx);
}
