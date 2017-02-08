/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_loop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 09:37:33 by qle-guen          #+#    #+#             */
/*   Updated: 2017/02/08 12:43:52 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

void
	rt_loop
	(t_rt *rt)
{
	t_mlx	*mlx;

	if (!rt->update)
		return ;
	mlx = &rt->mlx;
	if (!rt_cl_exec(rt))
	{
		ERR("opencl error", 0, 0);
		rt_exit(mlx);
	}
	rt->update = 0;
}
