/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_obj_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 11:23:56 by qle-guen          #+#    #+#             */
/*   Updated: 2017/02/09 12:27:14 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

/*
** objs[0] is the camera
*/

void
	rt_obj_init
	(t_u32_v2 size
	, t_vect *objs)
{
	t_obj	cam;
	t_obj	sphere;

	vect_req(objs, 2 * sizeof(t_obj));
	cam.type = OBJ_CAMERA;
	cam.pos.x = size.x / 2.0;
	cam.pos.y = size.y / 2.0;
	cam.pos.z = 0;
	VECT_ADD(objs, cam);
	sphere.type = OBJ_SPHERE;
	sphere.pos.x = size.x / 2.0;
	sphere.pos.y = size.y / 2.0;
	sphere.pos.z = 10;
	sphere.radius = 3;
	VECT_ADD(objs, sphere);
}
