/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprofett <mprofett@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:04:20 by mprofett          #+#    #+#             */
/*   Updated: 2023/08/04 15:12:08 by mprofett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
	return;
}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y))
{
	return;
}

Point::Point(Point &copy) : _x(copy._x), _y(copy._y)
{
	return;
}

Point::~Point()
{
	return;
}

float	Point::get_x_float_value(void) const
{
	return (this->_x.toFloat());
}

float	Point::get_y_float_value(void) const
{
	return (this->_y.toFloat());
}

Point	&Point::operator=(Point &copy)
{
	return (copy);
}
