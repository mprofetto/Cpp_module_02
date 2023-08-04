/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 15:04:10 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/04 16:16:48 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	ax = a.get_x_float_value();
	float	ay = a.get_y_float_value();
	float	bx = b.get_x_float_value();
	float	by = b.get_y_float_value();
	float	cx = c.get_x_float_value();
	float	cy = c.get_y_float_value();
	float	px = point.get_x_float_value();
	float	py = point.get_y_float_value();
	float	det = (bx - ax) * (cy - ay) - (by - ay) * (cx - ax);

	return	(det * ((bx - ax) * (py - ay) - (by - ay) * (px - ax)) > 0
		&& det * ((cx - bx) * (py - by) - (cy - by) * (px - bx)) > 0
		&& det * ((ax - cx) * (py - cy) - (ay - cy) * (px - cx)) > 0);
}
