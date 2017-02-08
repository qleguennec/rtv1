/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_object.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 07:15:53 by qle-guen          #+#    #+#             */
/*   Updated: 2017/02/08 09:30:22 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RT_OBJECT_H
# define RT_OBJECT_H

# include "libft/types.h"

# define OBJECT_NEW(t, x, y, z) ((t_object){t, V3(x, y, z)})

# define OBJECT_TYPE_SPHERE 1

typedef struct		s_object
{
	t_u32			type;
	t_f64_v3		pos;
}					t_object;

#endif
