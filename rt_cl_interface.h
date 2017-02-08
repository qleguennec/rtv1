/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_cl_interface.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 07:55:11 by qle-guen          #+#    #+#             */
/*   Updated: 2017/02/08 08:43:34 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RT_CL_INTERFACE_H
# define RT_CL_INTERFACE_H

#include <OpenCL/opencl.h>

typedef struct		s_camera
{
	cl_double3		pos;
	cl_double		plane_dist;
}					t_camera

#endif
