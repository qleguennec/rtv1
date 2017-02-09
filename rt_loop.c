/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_loop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 09:37:33 by qle-guen          #+#    #+#             */
/*   Updated: 2017/02/09 09:37:42 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

t_i32
	rt_loop
	(t_rt *rt)
{
	t_mlx	*mlx;

	if (!rt->update)
		return (0);
	mlx = &rt->mlx;
	rt->update = 0;
	if (!rt_cl_exec(rt))
	{
		ERR("opencl error", 0, 0);
		rt_exit(mlx);
	}
	return (1);
}
