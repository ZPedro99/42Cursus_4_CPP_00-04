/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:55:11 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/07 17:19:03 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(const float num1, const float num2) : _x(num1), _y(num2)
{
}

Point::Point(const Point& obj) : _x(obj._x), _y(obj._y)
{
}

Point&	Point::operator=(const Point& obj)
{
	if(this != &obj)
	{
		(Fixed) _x = obj._x;
		(Fixed) _y = obj._y;
	}
	return(*this);
}

Point::~Point()
{
}

Fixed	Point::getX() const
{
	return(_x);
}

Fixed	Point::getY() const
{
	return(_y);
}