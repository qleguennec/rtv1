/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 07:20:18 by qle-guen          #+#    #+#             */
/*   Updated: 2017/02/08 09:30:47 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RT_H
# define RT_H

# define T_F64_V3
# define T_U32_V2

# include "libcl/libcl.h"
# include "libfmt/libfmt.h"
# include "libft/libft.h"
# include "libqlex/mlx.h"
# include "rt_object.h"

# include <Events.h>
# include <X.h>
# include <limits.h>

typedef struct		s_mlx
{
	void			*mlx;
	void			*win;
	void			*img;
	t_u32			*tex;
}					t_mlx;

typedef struct		s_rt
{
	t_mlx			mlx;
	t_u32_v2		size;
}					t_rt;

void				rt_exit(t_mlx *mlx);

/*
** graphics
*/
bool				rt_graphics_init(t_u32_v2 size, t_mlx *mlx, char *title);

/*
** events
*/
bool				rt_events_init(t_rt *rt);
void				rt_events_keyboard(t_i32 key, t_rt *rt);

#endif
