/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_obj.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 07:15:53 by qle-guen          #+#    #+#             */
/*   Updated: 2017/02/08 11:57:23 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RT_OBJ_H
# define RT_OBJ_H

# include "libft/types.h"
# include "rt_obj_types.h"

# include <OpenCL/opencl.h>

typedef struct		s_obj
{
	t_u8			type;
	cl_double3		pos;
	cl_double		params[1];
}					t_obj;

#endif
