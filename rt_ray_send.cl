/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_ray_send.cl                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 07:50:15 by qle-guen          #+#    #+#             */
/*   Updated: 2017/02/08 07:50:16 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt_cl_interface.h"

kernel void
	rt_ray_send
	(global unsigned int *rays
	, global t_obj *objs
	, size_t nobjs)
{
	size_t		x;
	size_t		y;
	double		ray_dir;

	x = get_local_id(0);
	y = get_local_id(1);
	printf("%lu %lu\n", x, y);
	printf("%lu %d\n", nobjs, objs[0].type);
}
