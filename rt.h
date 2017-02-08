/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 07:20:18 by qle-guen          #+#    #+#             */
/*   Updated: 2017/02/08 13:23:39 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RT_H
# define RT_H

# define T_F64_V3
# define T_U32_V2

# include "rt_obj.h"

# include "libcl/libcl.h"
# include "libfmt/libfmt.h"
# include "libft/libft.h"
# include "libvect/libvect.h"
# include "libgnl/libgnl.h"
# include "libqlex/mlx.h"

# include <Events.h>
# include <X.h>
# include <fcntl.h>
# include <limits.h>

//TODO remove debug includes
# include <assert.h>
# include <stdio.h>
# include <unistd.h>

typedef struct		s_mlx
{
	void			*mlx;
	void			*win;
	void			*img;
	t_u32			*tex;
}					t_mlx;

typedef struct		s_cl
{
	t_cl_info		info;
	t_cl_krl		ray_send_krl;
	cl_mem			objs;
	size_t			nobjs;
}					t_cl;

typedef struct		s_scene
{
	t_vect			objs;
}					t_scene;

typedef struct		s_rt
{
	t_mlx			mlx;
	t_cl			cl;
	t_u32_v2		size;
	t_scene			scene;
	bool			update : 1;
}					t_rt;

void				rt_exit(t_mlx *mlx);
void				rt_loop(t_rt *rt);

/*
** graphics
*/
bool				rt_graphics_init(t_u32_v2 size, t_mlx *mlx, char *title);

/*
** events
*/
bool				rt_events_init(t_rt *rt);
void				rt_events_keyboard(t_i32 key, t_rt *rt);

/*
** opencl
*/
bool				rt_cl_exec(t_rt *rt);
bool				rt_cl_init(t_rt *rt);

/*
** objects
*/
void				rt_obj_init(t_u32_v2 size, t_vect *objs);

#endif
