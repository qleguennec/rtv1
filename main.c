/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qle-guen <qle-guen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/08 09:03:43 by qle-guen          #+#    #+#             */
/*   Updated: 2017/02/08 09:36:41 by qle-guen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

#undef SIZE_MAX
#define SIZE_MIN 600
#define SIZE_MAX 1300

static bool
	read_args
	(t_rt *rt
	, int argc
	, char **argv)
{
	size_t	width;
	size_t	height;

	if (argc != 3)
		return (false);
	if (ft_strlen(argv[1]) > 10 || ft_strlen(argv[2]) > 10)
		return (false);
	if (!(STRONLY(argv[1], DIGIT) && STRONLY(argv[2], DIGIT)))
		return (false);
	width = 0;
	height = 0;
	STRTOB10(argv[1], width);
	STRTOB10(argv[1], height);
	if (width < SIZE_MIN
		|| width > SIZE_MAX
		|| height < SIZE_MIN
		|| height > SIZE_MAX)
		return (false);
	rt->size.x = (t_u32)width;
	rt->size.y = (t_u32)height;
	return (true);
}

int
	main
	(int argc
	, char **argv)
{
	t_rt	rt;

	if (!read_args(&rt, argc, argv))
		return (ERR("usage: rt width height", 1, 0));
	if (!rt_graphics_init(rt.size, &rt.mlx, "rtv1"))
		return (ERR("mlx error", 1, 0));
	if (!rt_events_init(&rt))
		return (ERR("mlx error", 1, 0));
	return (0);
}
