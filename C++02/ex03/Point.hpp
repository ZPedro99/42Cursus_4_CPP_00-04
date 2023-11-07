/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomirand <jomirand@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:55:13 by jomirand          #+#    #+#             */
/*   Updated: 2023/11/07 15:22:57 by jomirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	private:
		const Fixed _x;
		const Fixed _y;
	public:
		Point();
		Point(const float num1, const float num2);
		Point(const Point& obj);
		Point&	operator=(const Point& obj);
		~Point();
		Fixed	getX() const;
		Fixed	getY() const;
};

//bsp

bool	bsp( Point const a, Point const b, Point const c, Point const point);
Fixed	area(Point const a, Point const b, Point const c);

#endif