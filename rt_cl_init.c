/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_cl_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 09:42:27 by qle-guen          #+#    #+#             */
/*   Updated: 2017/02/09 08:48:02 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

#define FILENAME	"rt_ray_send.cl"
#define KRLNAME		"rt_ray_send"

static void
	cl_build_line
	(t_rt *rt
	, t_vect *build_line)
{
	vect_init(build_line);
	VECT_STRADD(build_line, "rt_ray_send:");
	VECT_STRADD(build_line, "-I. ");
	FMT_VECT(build_line, "-D WIDTH=%a ", rt->size.x);
	FMT_VECT(build_line, "-D HEIGHT=%a ", rt->size.y);
	FMT_VECT(build_line, "-D AREA=%a ", rt->size.x * rt->size.y);
	FMT_VECT(build_line, "-D XCENTER=%a ", rt->size.x / 2);
	FMT_VECT(build_line, "-D YCENTER=%a ", rt->size.y / 2);
}

bool
	rt_cl_init
	(t_rt *rt)
{
	t_cl	*cl;
	t_i32	fd;
	t_vect	build_line;

	cl = &rt->cl;
	if ((fd = open(FILENAME, O_RDONLY)) < 0)
		return (false);
	cl_init(&cl->info);
	cl_krl_init(&cl->ray_send_krl, 1);
	cl->ray_send_krl.sizes[0] = rt->size.x * rt->size.y * sizeof(t_u32);
	cl_build_line(rt, &build_line);
	if (cl_krl_build(&cl->info
		, &cl->ray_send_krl
		, fd
		, &build_line) != CL_SUCCESS)
		return (false);
	close(fd);
	free(build_line.data);
	return (true);
}
